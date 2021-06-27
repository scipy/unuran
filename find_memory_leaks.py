"""Find potential memory leaks when UNU.RAN is used in SciPy."""

import pathlib
import re
import io
import argparse
import logging
from textwrap import dedent


class bcolors:
    HEADER = "\033[95m"
    OKBLUE = "\033[94m"
    OKCYAN = "\033[96m"
    OKGREEN = "\033[92m"
    WARNING = "\033[93m"
    FAIL = "\033[91m"
    ENDC = "\033[0m"
    BOLD = "\033[1m"
    UNDERLINE = "\033[4m"


def _find_leaks(logger: logging.Logger, windowsize: int) -> int:
    assert windowsize > 1, "windowsize must be greater than 1."
    # UNU.RAN source directory
    base = pathlib.Path(__file__).parent / "unuran" / "src"
    # all the submodules under the UNU.RAN directory
    dirs = [
        "distr",
        "distributions",
        "methods",
        "parser",
        "specfunct",
        "tests",
        "urng",
        "utils",
    ]
    # report the number of potential leaks found.
    n_leaks = 0

    for dir in dirs:
        dir = base / dir
        for file in dir.glob("*.c"):
            with open(file, "rb") as f:
                content = f.read().decode("utf-8", "ignore").strip().split("\n")
            # find the _unur_error of _unur_check macro uses
            # and store the line number at which it is found.
            indices = []
            for i in range(len(content)):
                if (
                    re.match("(.*)(_unur_check|_unur_error)(.*)", content[i])
                    is not None
                ):
                    indices.append(i)
            # iterate through all the lines where there is a check for error
            # and search `windowsize` lines under the check for `free` keyword.
            # if it is found, that means there is a potential memory leak there.
            for i in indices:
                leak = 0
                for j in range(windowsize):
                    if i + j >= len(content):
                        break
                    if re.match("(.*)free(.*)", content[i + j]):
                        leak = 1
                        n_leaks += 1
                        break
                if leak:
                    infostr = f" {str(file)}:{i+1}: "
                    logger.info(
                        bcolors.OKGREEN
                        + bcolors.BOLD
                        + infostr
                        + dedent(content[i])
                        + bcolors.ENDC
                    )
                    for j in range(windowsize):
                        if i + j >= len(content):
                            break
                        if re.match("(.*)free(.*)", content[i + j]):
                            logger.info(
                                len(infostr) * " "
                                + bcolors.FAIL
                                + bcolors.BOLD
                                + dedent(content[i + j])
                                + bcolors.ENDC
                            )
                        else:
                            logger.info(len(infostr) * " " + dedent(content[i + j]))
                    logger.info("")

    # return the number of memory leaks
    return n_leaks


if __name__ == "__main__":
    parser = argparse.ArgumentParser(__doc__)
    parser.add_argument(
        "-v", action="store_true", help="Enable verbose logging.", default=False
    )
    parser.add_argument(
        "--window-size",
        type=int,
        help="Window size. Number of lines to search for `free` under a check.",
        default=5,
    )
    parser.add_argument(
        "--no-color",
        action="store_true",
        help="Pass this flag if you don't want colors in your output.",
        default=False,
    )
    parser.add_argument(
        "--output", type=str, help="Dump the output to a file.", default=None
    )
    args = parser.parse_args()
    if args.output or args.no_color:

        class bcolors:
            OKGREEN = ""
            FAIL = ""
            BOLD = ""
            ENDC = ""

    logging.basicConfig(filename=args.output, filemode="w")
    logger = logging.getLogger("memory-leaks")
    if args.output or args.v:
        logger.setLevel(logging.INFO)
    print(
        "Number of potential memory leaks found:", _find_leaks(logger, args.window_size)
    )

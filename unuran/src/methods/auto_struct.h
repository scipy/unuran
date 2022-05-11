/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: unif_struct.h                                                     *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares structures for method AUTO                               *
 *         (selects a method for a given distribution object AUTOmatically)  *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   Copyright (c) 2000-2006 Wolfgang Hoermann and Josef Leydold             *
 *   Department of Statistics and Mathematics, WU Wien, Austria              *
 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* Information for constructing the generator                                */

struct unur_auto_par {
  int logss;                       /* logarithm of sample size               */
};

/*---------------------------------------------------------------------------*/
/* The generator object                                                      */

struct unur_auto_gen {
  int dummy;                       /* there is no generator object           */
};

/*---------------------------------------------------------------------------*/

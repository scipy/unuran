/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: string_struct.h                                                   *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares structures for strings                                   *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   Copyright (c) 2000-2006 Wolfgang Hoermann and Josef Leydold             *
 *   Department of Statistics and Mathematics, WU Wien, Austria              *
 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* String                                                                    */

struct unur_string {
  char *text;           /* pointer to string text                            */
  int   length;         /* length of string                                  */
  int   allocated;      /* length allocated memory block                     */
};

/*---------------------------------------------------------------------------*/

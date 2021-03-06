/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: cext_struct.h                                                     *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares structures for method CEXT                               *
 *         (wrapper for Continuous EXTernal generators)                      *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   Copyright (c) 2000-2022 Wolfgang Hoermann and Josef Leydold             *
 *   Department of Statistics and Mathematics, WU Wien, Austria              *
 *   SPDX-License-Identifier: BSD-3-Clause                                   *
 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* Information for constructing the generator                                */

struct unur_cext_par {   /* data for external generator */
  int    (*init)  (UNUR_GEN *gen);   /* pointer to initialization routine    */
  double (*sample)(UNUR_GEN *gen);   /* pointer to sampling routine          */
};

/*---------------------------------------------------------------------------*/
/* The generator object                                                      */

struct unur_cext_gen { 
  int    (*init)  (UNUR_GEN *gen);   /* pointer to initialization routine    */
  double (*sample)(UNUR_GEN *gen);   /* pointer to sampling routine          */

  void *param;               /* parameters for the generator                 */
  size_t size_param;         /* size of parameter object                     */
};

/*---------------------------------------------------------------------------*/

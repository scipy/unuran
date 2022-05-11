/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: umath_source.h                                                    *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares macros, constants, structures, function prototypes, etc. *
 *         for using mathematics in UNU.RAN.                                 *
 *                                                                           *
 *****************************************************************************
 *                                                                           *

 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
#ifndef UMATH_SOURCE_H_SEEN
#define UMATH_SOURCE_H_SEEN
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/* Prototypes for various functions used in library                          */  

/* Compute a "mean" defined as combibation of arithmetic and harmonic mean   */
double _unur_arcmean( double x0, double x1 );

/*---------------------------------------------------------------------------*/
/* Macros                                                                    */

#define _unur_min(x,y)   (((x)<(y)) ? (x) : (y))
#define _unur_max(x,y)   (((x)>(y)) ? (x) : (y))

/*---------------------------------------------------------------------------*/
#endif  /* UMATH_SOURCE_H_SEEN */
/*---------------------------------------------------------------------------*/







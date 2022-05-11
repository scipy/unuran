/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: hri_struct.h                                                      *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares structures for method HRI                                *
 *         (Hazard Rate Increasing)                                          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *

 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* Information for constructing the generator                                */

struct unur_hri_par { 
  double p0;                          /* design (splitting) point            */
};

/*---------------------------------------------------------------------------*/
/* The generator object                                                      */

struct unur_hri_gen { 
  double p0;                          /* design (splitting) point            */
  double left_border;                 /* left border of domain               */
  double hrp0;                        /* hazard rate at p0                   */
};

/*---------------------------------------------------------------------------*/

























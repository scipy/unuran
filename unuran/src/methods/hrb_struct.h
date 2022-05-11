/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: hrb_struct.h                                                      *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares structures for method HRB                                *
 *         (Hazard Rate Bounded)                                             *
 *                                                                           *
 *****************************************************************************
 *                                                                           *

 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* Information for constructing the generator                                */

struct unur_hrb_par { 
  double upper_bound;                 /* upper bound for hazard rate         */
};

/*---------------------------------------------------------------------------*/
/* The generator object                                                      */

struct unur_hrb_gen { 
  double upper_bound;                 /* upper bound for hazard rate         */
  double left_border;                 /* left border of domain               */
};

/*---------------------------------------------------------------------------*/

























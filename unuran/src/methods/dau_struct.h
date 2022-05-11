/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: dau_struct.h                                                      *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares structures for method DAU                                *
 *         ((Discrete) Alias-Urn)                                            *
 *                                                                           *
 *****************************************************************************
 *                                                                           *

 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* Information for constructing the generator                                */

struct unur_dau_par { 
  double  urn_factor;  /* relative length of table for alias-urn method      */
                       /*    (DEFAULT = 1 --> alias method)                  */
                       /*   length of table = urn_factor * len               */
};

/*---------------------------------------------------------------------------*/
/* The generator object                                                      */

struct unur_dau_gen { 
  int     len;         /* length of probability vector                       */
  int     urn_size;    /* size of table for alias-urn method                 */
  double *qx;          /* pointer to cut points for strips                   */
  int    *jx;          /* pointer to donor                                   */
  double  urn_factor;  /* relative length of table for alias-urn method      */
};

/*---------------------------------------------------------------------------*/

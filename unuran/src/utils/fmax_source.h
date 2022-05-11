/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: fmax_source.h                                                     *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         find minimum or maximum of continuous function                    *
 *                                                                           *
 *****************************************************************************
 *                                                                           *

 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/

/* find maximum of a generic function in an interval providing initial guess */
double _unur_util_find_max( struct unur_funct_generic fs,
                            double interval_min, 
		            double interval_max,
		            double max_guess );
			  
/*---------------------------------------------------------------------------*/

/* brent algorithm for maximum-calculation of a continous function */
double _unur_util_brent(struct unur_funct_generic fs,
                        double a, double b, double c, double tol);
			     
/*---------------------------------------------------------------------------*/

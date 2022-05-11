/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: slist_struct.h                                                    *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         declares structures for simple list                               *
 *                                                                           *
 *****************************************************************************
 *                                                                           *

 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* Store simple list.                                                        */

struct unur_slist {
  void **ptr;        /* pointer to array with pointers to list elements      */
  int n_ptr;         /* number of list elements                              */

#ifdef UNUR_COOKIES
  unsigned cookie;   /* magic cookie                                         */
#endif
};

/*---------------------------------------------------------------------------*/

/*****************************************************************************
 *                                                                           *
 *          UNURAN -- Universal Non-Uniform Random number generator          *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   FILE: umalloc_source.h                                                  *
 *                                                                           *
 *   PURPOSE:                                                                *
 *         prototypes for allocating memory blocks                           *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 *   Copyright (c) 2000-2006 Wolfgang Hoermann and Josef Leydold             *
 *   Department of Statistics and Mathematics, WU Wien, Austria              *
 *                                                                           *

 *                                                                           *
 *****************************************************************************/

/*---------------------------------------------------------------------------*/
/* Function prototypes for allocating memory blocks                          */

/*---------------------------------------------------------------------------*/
void *_unur_xmalloc(size_t size)             ATTRIBUTE__MALLOC;
void *_unur_xrealloc(void *ptr, size_t size) ATTRIBUTE__MALLOC;
/*---------------------------------------------------------------------------*/

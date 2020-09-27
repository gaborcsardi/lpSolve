#ifndef HEADER_myblas
#define HEADER_myblas

#include <R_ext/BLAS.h>
#include "lp_types.h"
#define BLAS_BASE         1

#ifdef __cplusplus
extern "C" {
#endif

/* ************************************************************************ */
/* BLAS functions                                                           */
/* ************************************************************************ */

void init_BLAS(void);
MYBOOL is_nativeBLAS(void);
MYBOOL load_BLAS(char *libname);
MYBOOL unload_BLAS(void);

/* ************************************************************************ */
/* User-callable BLAS definitions (C base 1)                                */
/* ************************************************************************ */
void dscallpsolve ( int n, REAL da,  REAL *dx, int incx );
void dcopylpsolve ( int n, REAL *dx, int incx, REAL *dy, int incy );
void daxpylpsolve ( int n, REAL da,  REAL *dx, int incx,   REAL *dy, int incy );
int  idamaxlpsolve( int n, REAL *x,  int is );

#ifdef __cplusplus
}
#endif

#endif

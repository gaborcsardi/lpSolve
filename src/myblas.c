
#include "myblas.h"

void init_BLAS(void)
{
}

MYBOOL is_nativeBLAS(void)
{
  return( FALSE );
}

MYBOOL load_BLAS(char *libname)
{
  return( TRUE );
}
MYBOOL unload_BLAS(void)
{
  return( TRUE );
}

/* ************************************************************************ */

void daxpylpsolve( int n, REAL da, REAL *dx, int incx, REAL *dy, int incy)
{
  dx++;
  dy++;
  F77_CALL(daxpy)( &n, &da, dx, &incx, dy, &incy);
}

/* ************************************************************************ */
void dcopylpsolve( int n, REAL *dx, int incx, REAL *dy, int incy)
{
  dx++;
  dy++;
  F77_CALL(dcopy)( &n, dx, &incx, dy, &incy);
}

/* ************************************************************************ */
void dscallpsolve (int n, REAL da, REAL *dx, int incx)
{
  dx++;
  F77_CALL(dscal)(&n, &da, dx, &incx);
}

/* ************************************************************************ */
int idamaxlpsolve( int n, REAL *x, int is )
{
  x++;
  return ( F77_CALL(idamax)( &n, x, &is ) );
}

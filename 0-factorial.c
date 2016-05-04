#include <limits.h>

int factorial(int n)
{
    long unsigned limit = n;
    limit *= n - 1;
    if(n < 0 || limit > INT_MAX) return (-1);
    if( n== 0) return(1);
    return( n* factorial(n-1));
}

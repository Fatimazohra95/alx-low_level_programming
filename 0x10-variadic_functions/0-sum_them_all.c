#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - Returns the sum of all its paramters.
 *@n: The number of paramters.
 *@...: A variable number of paramters.
 *
 *Returns: if n == 0 - 0.
 *otherwise - the sum of all paramters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}

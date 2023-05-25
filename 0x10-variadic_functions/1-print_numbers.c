#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers, followed ba a new line.
 *@separator: the string to be printed.
 *@n: the number of integers passed to the functions.
 *@...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int index;

va_start(nums, n);

for (index = 0; index < n; index++)
{
printf("%d", va_arg(nums, int));

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(nums);
}

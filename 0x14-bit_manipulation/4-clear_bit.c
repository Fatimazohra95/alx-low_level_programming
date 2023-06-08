#include "main.h"

/**
 *clear_bit - The value of a given bit sited to 0
 *@n: Pointer to the number
 *@index: index of the bit
 *
 *Return: 1 (Success), -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}

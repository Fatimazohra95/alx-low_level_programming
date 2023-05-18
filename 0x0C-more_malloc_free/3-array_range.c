#include <stdlib.h>
#include "main.h"

/**
 **array_range - creates an array of integers
 *@min: minimum range
 *@max: maximum range
 *
 *Return: pointer to the new array
 */

int *array_range(int min, int max)
{

	int *a, i = 0;

if (min > max)
return (NULL);

a = malloc((sizeof(int) * (max - min)) + sizeof(int));


if (a == NULL)
return (NULL);

for (i = 0; min <= max; i++)
a[i] = min++;

return (a);
}

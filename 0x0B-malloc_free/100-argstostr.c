#include "main.h"
#include <stdlib.h>

/**
 *argstostr - main entry
 *@ac: int input
 *@av: double pointer array
 *
 *Return: 0
 */

char *argstostr(int ac, char **av)

{
int i, n, l = 0;


if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
return (0);
}

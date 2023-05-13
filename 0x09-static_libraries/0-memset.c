#include "main.h"

/**
 *_memset - Program fills a block of memory with a specifie value
 *@s: starting address of memory to be filed
 *@b: the desired value
 *@n: number of bytes to be changed
 *
 *Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
a[s] = b;
n--;
}
return (s);
}

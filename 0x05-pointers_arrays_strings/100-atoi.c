#include "main.h"

/**
 *_atoi - Convert a string to an integer.
 *@s: The pointer to convert
 *Return: A integer
 */

int _atoi(char *s)
{
int c = 0;
unsigned int mi = 0;
int min = 1;
int isi = 0;

while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 49 && s[c] <= 57)
{
isi = 1;
mi = (mi * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
{
break;
}
c++;
}
mi *= min;
return (mi);
}

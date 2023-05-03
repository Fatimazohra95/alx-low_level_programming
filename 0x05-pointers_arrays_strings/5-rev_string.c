#include "main.h"
/**
 *rev_string - Reverses a string
 *@s: the string to be modified
 *Return: void
 */
void rev_string(char *s)
{
int longi = 0;
int t = 0;
char *y = s;
int o;

while (*y != '\0')
{
y++;
longi++;
}
t = longi - 1;
for (o = 0 ; o <= t ; o++)
{
if (o % 2 == 0)
{
_putchar(s[o]);
}
}
_putchar('\n');
}

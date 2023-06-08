#include "main.h"

/**
 *get_endianness - A machine checked if is little or big
 *
 *Return: 0 big, 1 little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}

#include "main.h"
#include <unistd.h>

/**
 *_putchar - wntes the characyter c to stdout
 *@c: the caracter to print
 *
 *Return: On 1
 *On error: -1 is returend and errno is set appropriatly
 */
int _putchar(char c)
{
return (write(1, &c, 1))
}

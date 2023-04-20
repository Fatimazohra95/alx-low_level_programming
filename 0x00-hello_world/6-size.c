#include <stdio.h>
/**
 *main - Entry point
 *code by fati
 *Return: always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %c byte(S)\n", (unsigned long)sizeof(a));
printf("Size of an int: %d byte(S)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %llu byte(S)\n", (unsigned long)sizeof(d));
printf("Size of a float: %f byte(S)\n", (unsigned long)sizeof(f));
return (0);
}

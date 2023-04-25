#include "main.h"
/**
 *_islpha - Chcks for alphabet character
 *@c: The character to be checked
 *Return: 1 for alphabetic character or 0 for anything else
 */
int _islpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

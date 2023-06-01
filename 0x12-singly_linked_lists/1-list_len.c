#include <stdlib.h>
#include "lists.h"

/**
 *list_len - The number of elements
 *@h: The pointer
 *
 *Return: Length
 */

size_t list_len(const list_t *h)
{
unsigned int i = 0;

while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}

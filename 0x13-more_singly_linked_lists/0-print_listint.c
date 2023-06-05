#include "lists.h"

/**
 *print_listint - All the elements of a linked list printed
 *@h: The linked list of type printed
 *
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}

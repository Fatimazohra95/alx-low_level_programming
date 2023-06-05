#include "lists.h"

/**
 *listint_len - The number of elements in linked list returned
 *@h: The linked list to traverse
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}

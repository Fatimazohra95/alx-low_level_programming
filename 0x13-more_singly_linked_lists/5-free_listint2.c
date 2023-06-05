#include "lists.h"

/**
 *free_listint2 - A linked list freed.
 *@head: The pointer to the list to be freed
 *
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}

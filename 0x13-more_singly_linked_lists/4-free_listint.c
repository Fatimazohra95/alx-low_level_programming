#include "lists.h"

/**
 *free_listint - Frees a listint
 *@head: A pointer to the head of the listint
 *
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}

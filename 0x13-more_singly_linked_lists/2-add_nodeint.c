#include "lists.h"

/**
 *add_nodeint - New node added at the beginning of linked list
 *@head: The pointer to the first node
 *@n: data to insert
 *
 *Return: pointer to the new node, or NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;

*head = new;

return (new);
}

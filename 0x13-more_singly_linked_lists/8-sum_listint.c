#include "lists.h"

/**
 *sum_listint - The sum of all the data is calculated
 *@head: The first node
 *
 *Return: Resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}

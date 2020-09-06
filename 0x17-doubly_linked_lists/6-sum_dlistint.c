#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: pointer
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int add;
for (add = 0; head != NULL;)
{
add = add + (head->n);
head = head->next;
}
return (add);
}

#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: head of the linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j;
for (j = 0; h != '\0'; j++)

{
h = h->next;
}
return (j);
}

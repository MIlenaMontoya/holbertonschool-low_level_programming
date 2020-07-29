#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked intlist.
 * @h: head of the linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t j;
for (j = 0; h != '\0'; j++)

{
h = h->next;
}
return (j);
}

#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: Pointer  address of the head
 *
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

for (n = 0; h != '\0'; n++)
{
printf("%d\n", h->n);
h = h->next;
}
	return (n);
}

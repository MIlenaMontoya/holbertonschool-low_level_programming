#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer  address of the head
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

for (n = 0; h != '\0'; n++)
{
printf("%d\n", h->n);
h = h->next;
}
	return (n);
}

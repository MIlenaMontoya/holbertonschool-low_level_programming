#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer head
 *
 * Return: number of elements in a linked list_t
 */

size_t list_len(const list_t *h)

{
size_t a;
for (a = 0; h != '\0'; a++)
{
h = h->next;
}
return (a);
}

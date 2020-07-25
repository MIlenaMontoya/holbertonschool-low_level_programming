#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer head
 *
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
size_t a;
for (a = 0; h != '\0'; a++)
{
if (h->str == '\0')
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
}
return (a);
}

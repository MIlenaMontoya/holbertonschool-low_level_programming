#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: double pointer
 *
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *list_free;
if (head == NULL)
return;
for (; head != NULL;)
{
list_free = (head)->next;
free(head);
head = list_free;
}
}

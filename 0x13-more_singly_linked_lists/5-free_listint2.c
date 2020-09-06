#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
listint_t *list_free;
if (head == NULL)
return;
for (; *head != NULL;)
{
list_free = (*head)->next;
free(*head);
*head = list_free;
}
}

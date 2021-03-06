#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: pointer
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *list_free;

	for (; head != NULL;)
{
		list_free = head;
		head = head->next;
		free(list_free);
}
}

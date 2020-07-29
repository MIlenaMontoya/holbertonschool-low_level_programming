#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index of the node
 *
 * Return: indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p_index;

	if (head == NULL)
		return (NULL);
	for (p_index = 0; p_index < index; p_index++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

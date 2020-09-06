#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: index of the node
 *
 * Return: indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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

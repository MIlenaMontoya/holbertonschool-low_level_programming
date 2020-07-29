#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: douuble pointer to the list
 * @n: integer to add to the list
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *aux;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
        if (*head == NULL)
        {

	*head = new_node;
	return (new_node);
}
aux = *head;
for (; aux->next != NULL;)
{
        aux = aux->next;
}
aux->next = new_node;
return (new_node);
}

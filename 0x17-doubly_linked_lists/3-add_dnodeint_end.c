#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: douuble pointer to the list
 * @n: integer to add to the list
 *
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *aux;

if (head == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
aux = *head;
for (; aux->next != NULL;)
{
aux = aux->next;
}
aux->next = new_node;
new_node->prev = aux;
return (new_node);
}

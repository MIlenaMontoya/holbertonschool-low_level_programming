#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: Pointer with the address to the first node
 * @str: Pointer address of the string
 *
 * Return: adress new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *aux;
	unsigned int m;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	m = 0;
	while (str[m] != 0)
	{
		m++;
	}
	ptr->len = m;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		aux = *head;
		while (aux->next != 0)
		{
			aux = aux->next;
		}
		aux->next = ptr;
	}
	return (ptr);
}

#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: Pointer with the address the first node
 * @str: Pointer address of the string
 *
 * Return: adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;
unsigned int n;

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
	n = 0;
	while (str[n] != 0)
	{
		n++;
	}
	ptr->len = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head, *aux;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		for (head = ht->array[index]; head != NULL; head = aux)
		{
			aux = head->next;
			free(head->key);
			free(head->value);
			free(head);
		}
	}
	free(ht->array);
	free(ht);
}

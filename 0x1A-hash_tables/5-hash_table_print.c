#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned int index;
	int check = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (aux = ht->array[index]; aux != NULL; aux = aux->next)
		{
			if (check != 0)
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
			check = 1;
		}
	}
	printf("}\n");
}

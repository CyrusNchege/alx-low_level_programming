#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}


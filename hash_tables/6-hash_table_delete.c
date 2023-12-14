#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i]

		while (temp != NULL)
		{
			temp = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			ht-array[i] = temp;
		}
	}

	free(ht->array);
	ht-array = NULL;
	ht-size = 0;
	free(ht);
}

#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

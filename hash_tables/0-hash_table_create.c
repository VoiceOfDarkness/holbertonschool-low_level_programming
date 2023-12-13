  GNU nano 4.8                         0-hash_table_create.c                         Modified  
#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 *
 * @size: size of the array
 *
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	return table;
}

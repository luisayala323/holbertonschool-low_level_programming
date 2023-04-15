#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *TABLE = malloc(sizeof(hash_table_t));

	if (TABLE == NULL)
	{
		return (NULL);
	}

	TABLE->size = size;

	TABLE->array = malloc(sizeof(hash_node_t *) * TABLE->size);

	for (i = 0; i < TABLE->size; i++)
	{
		TABLE->array[i] = NULL;
	}

	return (TABLE);
}

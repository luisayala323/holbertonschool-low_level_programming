#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: Key your looking for
 * Return: value, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
	return (0);

	index = key_index((unsigned char *) key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

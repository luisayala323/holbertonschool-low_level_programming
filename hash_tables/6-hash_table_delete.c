#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *delete;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			free(ht->array[i]);
		}
		else
		{
			tmp = ht->array[i];
			delete = ht->array[i];

			while (tmp != NULL)
			{
				delete = tmp;
				free(delete->key);
				free(delete->value);
				free(delete);
				tmp = tmp->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	const hash_table_t *index;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	index = ht;

	for (i = 0, j = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			index->array[j] = ht->array[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		tmp = index->array[i];
		if (i == 0)
			printf("{");
		if (index->array[i]->next == NULL)
		{
			printf("'%s': '%s'", index->array[i]->key, ht->array[i]->value);
			if (i < j - 1)
				printf(", ");
			else
				printf("}\n");
		}
		if (index->array[i]->next != NULL)
		{
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				printf(", ");
				tmp = tmp->next;
			}
		}
	}
}

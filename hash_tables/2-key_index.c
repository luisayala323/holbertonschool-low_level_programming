#include "hash_tables.h"
/**
 * key_index - Gives index of key
 * @key: the key
 * @size: size of the array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);

	index = hash % size;

	return (index);
}

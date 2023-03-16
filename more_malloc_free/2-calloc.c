#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	c = 0;
	while (c < nmemb * size)
	{
		ptr[c] = 0;
		c++;
	}
	return (ptr);
}

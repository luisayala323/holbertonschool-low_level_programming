#include "main.h"
/**
 * _memcpy -  fills the first n bytes of the memory area.
 * @dest: pointer with the dest to copy
 * @src: pointer that have the source to copy
 * @n: bytes to be copied
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

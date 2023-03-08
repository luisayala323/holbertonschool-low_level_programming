#include "main.h"
/**
 * _memset -  fills the first n bytes of the memory area.
 * @s: pointer that have the adress of the area
 * @b: constant byte that fills the area
 * @n: bytes to be filled
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}

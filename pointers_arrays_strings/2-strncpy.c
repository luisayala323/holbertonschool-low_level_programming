#include "main.h"
/**
 * _strncpy - function that copies string
 * @dest: string
 * @src: string
 * @n: int
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{

	for (n = 0; dest[n] != '\0'; n++)
	{
		src[n] = dest[n];
	}
	
	src[n] = '\0';

	return (0);
}

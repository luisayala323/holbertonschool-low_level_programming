#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src
 * @src: array string
 * @dest: pointer where the test is paste
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{

	int index;
	int i;

	for (i = 0; src[i] != 0; i++)
	{
	}
	for (index = 0; index <= i; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}

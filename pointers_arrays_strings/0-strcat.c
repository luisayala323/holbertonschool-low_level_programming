#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (0);

}

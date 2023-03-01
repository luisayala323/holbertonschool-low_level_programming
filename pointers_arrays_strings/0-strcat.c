#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		src[j] = src[i];
		i++;
		j++;
	}

	i = 0;

	while (dest[i] != '\0')
	{
		src[j] = dest[i];
		i++;
		j++;
	}
	src[j] = '\0';

	return (0);

}

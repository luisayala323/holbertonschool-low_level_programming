#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicated string
 * @str: string
 * Return: dup
 *
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	dup = malloc(len);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

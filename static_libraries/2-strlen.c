
#include "main.h"
/**
 * _strlen - print lenght
 * @s: input string
 * Return: count
 */
int _strlen(char *s)
{
		int i;
		int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}

#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal or 1 if not equal
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

		while (*s1 != '\0' && *s2 != '\0')
	{
			if (*s1 != *s2)
			{
				comp = i;
			}

		s1++;
		s2++;
	}

	if (comp == 0)

		return (0);
	else
		return (1);
}

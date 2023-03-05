#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: pointer with the location of the string
 * @c: character to find in the string
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		else if (s[j] == '\0')
		{
			s = '\0';
		}
	}
	return (s);

}

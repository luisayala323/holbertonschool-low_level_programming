#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: pointer with the location of the string
 * @accept: characters to check
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int lenght;
	int i;
	int j;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i <= lenght; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	s = '\0';
	return (s);
}

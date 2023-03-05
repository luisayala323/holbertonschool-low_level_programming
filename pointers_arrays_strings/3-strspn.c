#include "main.h"
/**
 * _strspn -  concatenates two strings.
 * @s: pointer with the location of the string
 * @accept: letters to accept and count
 * Return: Always
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int cont = 0;
	int temp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		temp = cont;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont = cont + 1;
			}
		}
		if (cont == temp)
		{
			return (cont);
		}
	}
	return (cont);

}

#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: tell numbers od spaces
 */
int _strcmp(char *s1, char *s2)
{
	int p = 0;

	while (*(s1 + p) == *(s2 + p) && *(s1 + p))
		p++;

	if (*(s2 + p))
		return (*(s1 + p) - *(s2 + p));
	else
		return (0);
}

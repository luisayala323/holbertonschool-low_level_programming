#include "main.h"
/**
 * _strlen_recursion - lenght of string
 * @s: string
 * Return: total lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (_strlen_recursion(s + 1) + 1);
}

#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function that checks for alphabetic character
 * @c: character check
 * Return: 0 success
 */

int _isalpha(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	_putchar('\n');

}

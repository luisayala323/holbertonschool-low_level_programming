#include <ctype.h>
#include <stdio.h>
#include "main.h"

/**
 * _islower -function that checks for lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase char or 0 else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

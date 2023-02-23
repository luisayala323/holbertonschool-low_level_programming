#include <unistd.h>
#include "main.h"

/**
 *
 * print_alphabet_x10 - prints 10 times the alphabe
 * Return: 0 scucces
 */

void print_alphabet_x10(void)

{
	char f;
	int c = 0;

	while (c <= 9)
	{
		for (f = 'a'; f <= 'z'; f++)
	{
		_putchar(f);
	}

	_putchar('\n');

	c++;
	}
}

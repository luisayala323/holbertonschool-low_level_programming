#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - print lowercase, followed by \n
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char f = 'a';

	while (f <= 'z')

	{
		_putchar(f);
		f++;
	}

	_putchar('\n');
}

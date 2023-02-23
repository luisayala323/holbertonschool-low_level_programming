#include "main.h"
#include <unistd.h>

/**
 * prints the alphabet - print lowercase, followed by \n
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')

	{
		_putchar('l');
		l++;
	}

	_putchar('\n');
}

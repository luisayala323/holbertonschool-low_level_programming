#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	putchar('_');
		putchar('p');
		putchar('u');
		putchar('t');
		putchar('c');
		putchar('h');
		putchar('a');
		putchar('r');
		putchar('\n');

	return (write(1, &c, 1));
}

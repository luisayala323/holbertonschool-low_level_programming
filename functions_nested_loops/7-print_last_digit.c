#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @d: last digit number
 * Return: 0 succes
 */

int print_last_digit(int d)
{
	int l;
	l = d % 10;

	if (l < 0)
	{
		l = l * (-1);
	}

	_putchar('0' + l);
	return (l);
}

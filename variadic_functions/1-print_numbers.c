#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print n amount arguments
 * @separator: seperate the numbers
 * @n: count how many numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list kp;

	va_start(kp, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(kp, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(kp);
}

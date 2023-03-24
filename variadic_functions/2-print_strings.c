#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print n amount of arguments
 * @separator: seperate the numbers
 * @n: count how many numbers
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list kp;

	va_start(kp, n);

	for (i = 0; i < n; i++)
	{
		if (kp == NULL)
			printf("(nil)");

		printf("%s", va_arg(kp, char *));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(kp);
}

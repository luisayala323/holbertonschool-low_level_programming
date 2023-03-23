#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 *sum_them_all - sums all argument
 *@n: all arguments
 *Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum = 0, j;

	if (n == 0)
	{
	return (0);
	}
	va_start(ptr, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}

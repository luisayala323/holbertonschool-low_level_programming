
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, h = 0;
	char *s = NULL;

	va_start(args, format);
	while (format && format[h])
		h++;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (i != h - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

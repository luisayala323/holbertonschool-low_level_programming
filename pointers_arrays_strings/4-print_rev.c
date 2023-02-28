#include "main.h"
/**
 *
 *
 */
void print_rev(char *s)
{
	int i;
	int min;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	min = i -1;
	for (; min >= 0; min--)
	{
		_putchar(s[min]);
	}
	_putchar('\n');
}


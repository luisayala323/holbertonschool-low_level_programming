#include "main.h"
/**
 * main - _print putchar
 * Return: 0
 */

int main(void)

{
	char name[] = "_putchar";
	int place;

	for (place = 0; place < 9; place++)
	{
		if (name[place] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(name[place]);
		}
	}
	return (0);
}

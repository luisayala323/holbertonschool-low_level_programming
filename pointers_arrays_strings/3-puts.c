 #include "main.h"
 /**
 * _put - prints string
 * *str: string
 *
 */
void _puts(char *str)
{
	int i;

	for (*str = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}

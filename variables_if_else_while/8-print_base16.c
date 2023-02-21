#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;
	char alfa;

	for (num = 48; num < 58; num++)

	{
		putchar(num);
	}
	for (alfa = 'a'; alfa <= 'f'; alfa++)
	{
		putchar(alfa);
	}
	putchar('\n');
	return (0);
}

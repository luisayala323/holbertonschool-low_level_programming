#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char up  = 'A';
	char low = 'a';

	while (low <= 'z')

	{
		putchar(low);
		low++;
	}

	while (up <= 'Z')

	{
		putchar(up);
		up++;
	}

	putchar('\n');

	return (0);

}

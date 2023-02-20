#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * Return: Always 0
 */
int main (void)
{
	char ALFA = 'A';

	while (ALFA <= 'Z')

	{
		putchar(ALFA);
		ALFA++;
	}
	putchar('\n');
	
	return (0);

}

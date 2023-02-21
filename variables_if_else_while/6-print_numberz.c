#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	int nume;

	for (nume = 0; nume < 10; nume++)
	putchar((nume % 10) + '0');

	putchar('\n');
	return (0);
}

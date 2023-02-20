#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e
 * Return: Always 0
 *
 */
int main(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)

	{
		if (letra != 'e' && letra != 'q')
			putchar(letra);
	}

	putchar('\n');
		return (0);
}

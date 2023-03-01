#include <stdio.h>
#include "main.h"
/**
 * print_array -  prints n elements of an array of integers
 * @a: array
 * @n: is the number of elements of the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		if (cont != (n - 1))
		{
			printf("%d, ", a[cont]);
		}
		else
		{
			printf("%d", a[cont]);
		}
	}
	putchar('\n');
}

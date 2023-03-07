#include "main.h"
/**
 * factorial - given number
 * @n: num
 * Return: the factorial of a given number
 *
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

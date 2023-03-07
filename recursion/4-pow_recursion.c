#include "main.h"
/**
 * _pow_recursion - returns the value and raised the power
 * @x: value
 * @y: raised power
 * Return: value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (x == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y -1));
}

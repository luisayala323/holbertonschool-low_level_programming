#include"main.h"
/**
 * find_square_root - find the square root
 * @root: root number
 * @n: random number
 * Return: return square root if its perfecto otherwise -1.
 */
int find_square_root(int root, int n)
{
	int perfect_square = root * root;

	if (perfect_square < n)
	{
		return (find_square_root(root + 1, n));
	}
	else if (perfect_square > n)
	{
		return (-1);
	}
	return (root);
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: random number to find square root
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (find_square_root(0, n));
}


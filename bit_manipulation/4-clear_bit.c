#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 1 at a given index.
 * @n: Number
 * @index: position
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
		return (1);
}

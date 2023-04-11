#include "main.h"
/**
 * flip_bits - Returns the number of bits u need to flip from one num
 * @m: one number
 * @n: another number
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int j = n ^ m;

	while (j > 0)
	{
		i++;
		j &= (j - 1);
	}

	return (i);
}

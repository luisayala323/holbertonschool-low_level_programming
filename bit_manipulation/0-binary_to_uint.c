#include "main.h"
/**
 * binary_to_uint - change a binary number to decimal
 * @b: binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
		val <<= 1;
		val += b[i] - '0';
		i++;
		}
		else
		{
			return (0);
		}
	}
	return (val);
}

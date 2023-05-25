#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers, linearly
 * @array: pointer to first element of array
 * @size: size of array
 * @value: value to be searched
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%i]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}

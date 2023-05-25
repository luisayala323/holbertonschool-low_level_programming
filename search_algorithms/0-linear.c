#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * using the linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found value at index: %lu\n", i);
			return (i);
		}
	}

	printf("Value not found in the array\n");
	return (-1);
}

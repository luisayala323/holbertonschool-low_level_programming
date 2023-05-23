#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searching for a value in a sorted
 * array of integers using the binary search algorithm
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to search for
 * Return: if value not present in array or if it's NULL,
 * return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}


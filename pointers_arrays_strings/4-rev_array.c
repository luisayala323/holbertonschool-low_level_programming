#include "main.h"
/**
 * reverse_array - reverse elements
 * @a: array
 * @n: elements in array
 */

void reverse_array(int *a, int n)
{
	int temp, begi = 0;
	int end = n - 1;

	while (begi < end)
	{
		temp = *(a + begi);
		*(a + begi) = *(a + end);
		*(a + end) = temp;
		begi++, end--;
	}
}

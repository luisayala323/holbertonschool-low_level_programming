#include "main.h"
/**
 * swap_int - swap variable
 * @a: 98
 * @b: 42
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}

#include "main.h"
/**
 * swap_int - swap variable
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}

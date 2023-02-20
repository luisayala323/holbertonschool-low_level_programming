#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - "print the last digit of the number stored in the variable n"
 * Return: 0
 *
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %d ", n);
	printf(" is %d", last);
		if (n > 5)
	printf("%d and is greater than 5\n", n);
		if (n == 0)
	printf("%d and is 0\n", n);
		if (!(n < 6))
	printf("%d and is less than 6 and not 0\n", n);
	return (0);
}

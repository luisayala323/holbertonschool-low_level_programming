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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d\n", n);
	printf("is %d\n", n);
		if (n > 5)
	printf("and is greater than 5\n");
		if (n == 0)
	printf("and is 0\n");
		if (n < 6)
	printf("and is less than 6 and not 0\n");

	return (0);
}

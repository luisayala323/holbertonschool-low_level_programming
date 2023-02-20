#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - "complete to see if n is + or -"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	if (n < 0)
		printf("is negative\n");
	return (0);
}

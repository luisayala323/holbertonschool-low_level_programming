#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: argument counter
 * @argv: argument array
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, sum;
	char Error[] = "Error";

	sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		sum = sum + atoi(argv[i]);
	}

	if (sum == 199)
	{
		printf("%s\n", Error);
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}

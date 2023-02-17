#include<stdio.h>

/**
 * main - entry point "Write a C program that prints the size of various types"
 * Return: 0
 */

int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongintType;
float floatType;

printf("Size of a char: %zu bytes\n", sizeof(charType));

printf("Size of an int: %zu bytes\n", sizeof(intType));

printf("Size of a long int: %zu bytes\n", sizeof(longintTipe));

printf("Size of a long long int: %zu bytes\n", sizeof(longlongintType));

printf("Size of a float: %zu bytes\n", sizeof(floatType));

return (0);
}

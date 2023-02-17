#include <stdio.h>
/**
 * main - entry point "Write a C program that prints the size of various types"
 * Return: 0
 */
int main(void)
{
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu bytes\n", sizeof(charType));
return (0);
}

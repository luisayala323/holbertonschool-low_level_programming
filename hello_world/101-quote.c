#include<stdio.h>
/**
 * main - entry" point  program that prints
 * Return: 0
 */
int main(void)
{
	FILE *fp;
	char str[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	fp = fopen("file.txt", "w");
	fwrite(str, 1, sizeof(str), fp);
	fclose(fp);
	return (0);
}

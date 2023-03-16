#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat
 * @s1: string 1
 * @s2: string 2
 * @n: 6
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (n > len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	   	concat[i] = s1[i];

	len2 = 0;
	
	for (j = i; j < (len1 + n); j++)
	{
		concat[j] = s2[len2];
		len2++;
	}

	concat[j] = '\0';
	
		return (concat);
}

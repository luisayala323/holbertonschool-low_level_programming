#include "main.h"
/**
 * _strpbrk - search for any of a set of bytes
 * @s: string
 * @accept: substring
 * Return: 0
 */

char_strpbrk(char s, characcept)
{
        int k;

        while (s)
        {
            for (k = 0; accept[k]; k++)
            {
            if (s == accept[k])
            return (s);
            }
            s++;
        }

        return ('\0');
}

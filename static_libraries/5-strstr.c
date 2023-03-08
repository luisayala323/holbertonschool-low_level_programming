#include "main.h"

/**
 * _strstr - search for a string inside of a string
 * @haystack: parent string
 * @needle:sought after string
 * Return: Always 0 (Success)
 */

char_strstr(char haystack, charneedle)
{
    for (; haystack != '\0'; haystack++)
    {
        charl = haystack;
        char p = needle;

        while (l == p &&p != '\0')
        {
            l++;
            p++;
        }

        if (*p == '\0')
            return (haystack);
    }

    return (0);
}

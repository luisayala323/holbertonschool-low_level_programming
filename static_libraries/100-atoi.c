#include "main.h"

/**
 * _atoi - make a string an integer
 * @s:string to be evaluated
 * Return: an integer
 */

int _atoi(char *s)
{
        int k = 0;
        unsigned int p = 0;
        int min = 1;
        int i = 0;

        while (s[k])
        {
                if (s[k] == 45)
                {
                        min *= -1;
                }
                while (s[k] >= 48 && s[k] <= 57)
                {
                        i = 1;
                        p = (p * 10) + (s[k] - '0');
                        k++;
                }
                if (i == 1)
                {
                        break;
                }
                k++;
        }
        p *= min;

        return (p);
}

#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int num = 0;
    int found = 0;

    /* skip any non-digit characters */
    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            sign *= -1; /* flip the sign if there is a minus sign */
        }
        if (s[i] >= '0' && s[i] <= '9')
        {
            found = 1; /* mark that a digit is found */
            num = num * 10 + (s[i] - '0'); /* add the digit to the number */
        }
        else if (found == 1)
        {
            break; /* stop when a non-digit is found after a digit */
        }
        i++;
    }

    return (num * sign); /* return the number with the sign */
}

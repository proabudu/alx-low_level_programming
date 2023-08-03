#include <stdio.h>

/**
 * 4-isalpha.c - A function that checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
    /* Check if c is in the range of lowercase letters */
    if (c >= 'a' && c <= 'z')
    {
        /* Return 1 */
        return (1);
    }
    /* Check if c is in the range of uppercase letters */
    else if (c >= 'A' && c <= 'Z')
    {
        /* Return 1 */
        return (1);
    }
    /* Otherwise, c is not a letter */
    else
    {
        /* Return 0 */
        return (0);
    }
}

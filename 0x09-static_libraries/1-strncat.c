#include "holberton.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    /* find the end of dest */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* append n bytes or less from src to dest */
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* add null terminator */
    dest[i] = '\0';

    return (dest);
}

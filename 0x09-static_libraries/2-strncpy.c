#include "holberton.h"

/**
 * _strncpy - copies a string using at most n bytes of src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to use from src
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* copy n bytes or less from src to dest */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* pad the rest of dest with null bytes */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}

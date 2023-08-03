#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    /* copy n bytes from src to dest */
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}

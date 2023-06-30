#include "holberton.h"

/* Prototype */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0; /* index for src and dest */
/* copy src to dest until n bytes or end of src */
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
/* fill the rest of dest with null bytes */
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest); /* return the pointer to dest */
}


#include "holberton.h"

/* Prototype */
char *_strcat(char *dest, char *src);
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0; /* index for dest */
int j = 0; /* index for src */
/* find the end of dest */
while (dest[i] != '\0')
{
i++;
}
/* append src to dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
/* add a terminating null byte */
dest[i] = '\0';
return (dest); /* return the pointer to dest */
}


#include <stdio.h>
/**
 * 0-strcat.c - A function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
/* Find the length of the destination string */
for (i = 0; dest[i] != '\0'; i++)
{
/* Do nothing */
}
/* Append the source string to the destination string */
for (j = 0; src[j] != '\0'; j++)
{
/* Copy the current character to the end of the destination string */
dest[i + j] = src[j];
}
/* Append the null terminator to the destination string */
dest[i + j] = '\0';
/* Return a pointer to the resulting string */
return (dest);
}

#include <stdio.h>
/**
* 2-strncpy.c - A function that copies a string
* @dest: The destination buffer
* @src: The source string
* @n: The number of bytes to copy
*
* Return: A pointer to the destination string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
/* Loop through the source string until n bytes or the null terminator */
for (i = 0; i < n && src[i] != '\0'; i++)
{
/* Copy the current character to the destination buffer */
dest[i] = src[i];
}
/* Pad the rest of the destination buffer with null bytes */
for (; i < n; i++)
{
/* Append the null byte to the destination buffer */
dest[i] = '\0';
}
/* Return a pointer to the destination string */
return (dest);
}

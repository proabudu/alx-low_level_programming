#include <stdio.h>

/**
 * 9-strcpy.c - A function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    /* Loop through the source string until the null terminator */
    for (i = 0; src[i] != '\0'; i++)
    {
        /* Copy the current character to the destination buffer */
        dest[i] = src[i];
    }
    /* Append the null terminator to the destination buffer */
    dest[i] = '\0';
    /* Return a pointer to the destination string */
    return (dest);
}

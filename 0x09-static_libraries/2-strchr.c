#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    /* loop through the string until c is found or end of string is reached */
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return (s + i); /* return the pointer to c */
        }
        i++;
    }

    /* check if c is the null terminator */
    if (c == '\0')
    {
        return (s + i); /* return the pointer to the end of s */
    }

    return (NULL); /* return NULL if c is not found */
}

#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
    int i = 0;

    /* loop through the string until the null terminator is reached */
    while (s[i] != '\0')
    {
        i++;
    }

    return (i); /* return the number of characters in s */
}

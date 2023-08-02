#include "main.h"
#include "holberton.h"

/**
 * wildcmp - compares two strings with wildcard
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0') /* base case: end of both strings */
        return (1);
    if (*s1 == *s2) /* matching characters */
        return (wildcmp(s1 + 1, s2 + 1)); /* recursive call */
    if (*s2 == '*') /* wildcard character */
    {
        if (*(s2 + 1) == '*') /* consecutive wildcards */
            return (wildcmp(s1, s2 + 1)); /* recursive call */
        if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)) /* check both branches */
            return (1);
    }
    return (0); /* not identical */
}


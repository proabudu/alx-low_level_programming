#include <stdio.h>

/**
 * 5-strstr.c - A function that locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j, k;

    /* Loop through the haystack string */
    for (i = 0; haystack[i] != '\0'; i++)
    {
        /* Loop through the needle string */
        for (j = 0, k = i; needle[j] != '\0'; j++, k++)
        {
            /* Compare the current characters */
            if (haystack[k] != needle[j])
            {
                /* Break out of the inner loop if they don't match */
                break;
            }
        }
        /* If the inner loop reached the end of the needle string */
        if (needle[j] == '\0')
        {
            /* Return a pointer to the beginning of the located substring */
            return (haystack + i);
        }
    }
    /* If no substring is found, return NULL */
    return (NULL);
}

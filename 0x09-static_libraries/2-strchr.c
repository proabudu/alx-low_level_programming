#include <stdio.h>
/**
* 2-strchr.c - A function that locates a character in a string
* @s: The string to search
* @c: The character to find
*
* Return: A pointer to the first occurrence of the character c in the string s,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
int i;
/* Loop through the string until the null terminator or the matching character */
for (i = 0; s[i] != '\0' && s[i] != c; i++)
{
/* Do nothing */
}
/* Check if the matching character is found */
if (s[i] == c)
{
/* Return a pointer to the matching character */
return (s + i);
}
/* Otherwise, the character is not found */
else
{
/* Return NULL */
return (NULL);
}
}

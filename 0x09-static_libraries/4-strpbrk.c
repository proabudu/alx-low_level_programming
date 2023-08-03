#include <stdio.h>
/**
* 4-strpbrk.c - A function that searches a string for any of a set of bytes
* @s: The string to scan
* @accept: The string containing the characters to match
*
* Return: A pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
/* Loop through the string s */
for (i = 0; s[i] != '\0'; i++)
{
/* Loop through the string accept */
for (j = 0; accept[j] != '\0'; j++)
{
 /* Compare the current characters */
if (s[i] == accept[j])
{
/* Return a pointer to the matching byte */
return (s + i);
}
}
}
/* If no matching byte is found, return NULL */
return (NULL);
}

#include <stdio.h>
/**
* 3-strcmp.c - A function that compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: An integer less than, equal to, or greater than zero if s1 is found,
* respectively, to be less than, to match, or be greater than s2
*/
int _strcmp(char *s1, char *s2)
{
/* Loop through the strings until one of them ends */
while (*s1 != '\0' && *s2 != '\0')
{
/* Compare the current characters */
if (*s1 != *s2)
{
/* Return the difference */
return (*s1 - *s2);
}
/* Move to the next characters */
s1++;
s2++;
}
/* Return the difference of the remaining characters */
return (*s1 - *s2);
}

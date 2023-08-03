#include <stdio.h>
/**
* 3-strspn.c - A function that gets the length of a prefix substring
* @s: The string to scan
* @accept: The string containing the characters to match
*
* Return: The number of bytes in the initial segment of s which consist only
* of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j, found;
/* Loop through the string s */
for (i = 0; s[i] != '\0'; i++)
{
/* Set a flag to indicate if the current character is in accept */
found = 0;
/* Loop through the string accept */
for (j = 0; accept[j] != '\0'; j++)
{
/* Compare the current characters */
if (s[i] == accept[j])
{
/* Increment the count */
count++;
/* Set the flag to true */
found = 1;
/* Break out of the inner loop */
break;
}
}
/* If the flag is false, it means the current character is not in accept */
if (found == 0)
{
/* Break out of the outer loop */
break;
}
}
/* Return the count */
return (count);
}

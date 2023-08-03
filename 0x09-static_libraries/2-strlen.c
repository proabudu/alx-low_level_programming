#include <stdio.h>
/**
* 2-strlen.c - A function that returns the length of a string
* @s: The string to measure
*
* Return: The length of the string
*/
int _strlen(char *s)
{
int i;
/* Initialize the counter */
i = 0;
/* Loop through the string until the null terminator */
while (s[i] != '\0')
{
/* Increment the counter */
i++;
}
/* Return the counter */
return (i);
}

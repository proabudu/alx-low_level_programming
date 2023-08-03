#include <stdio.h>

/**
 * 3-puts.c - A function that prints a string to the standard output
 * @str: The string to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
    /* Loop through the string until the null terminator */
    while (*str != '\0')
    {
        /* Print the current character */
        putchar(*str);
        /* Move to the next character */
        str++;
    }
    /* Print a new line */
    putchar('\n');
}

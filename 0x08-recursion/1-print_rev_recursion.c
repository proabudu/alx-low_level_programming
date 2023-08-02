#include "main.h"

void _print_rev_recursion(char *s)
{
/* If we haven't reached the end of the string yet, keep going */
if (*s != '\0')
{
/* Recursively call the function with the next character */
_print_rev_recursion(s + 1);
/* Print the current character */
_putchar(*s);
}
}


#include "main.h"

/* Our program for today */
void _puts_recursion(char *s)
{
/* If we've reached the end of the string, print a newline and return */
if (*s == '\0')
/* If we cont */
{
_putchar('\n');
return;
}
/* Print the current character and move on to the next one */
_putchar(*s);
_puts_recursion(s + 1);
}


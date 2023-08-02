#include "main.h"

/* If we've reached the end of the string, print a newline and return
 * Print the current character and move on to the next one
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}


#include "main.h"

void _puts_recursion(char *s) {
if (*s == '\0') {
// Base case: we have reached the end of the string.
_putchar('\n');
return;
} else {
// Recursive case: print the next character in the string, and then recurse.
_putchar(*s);
_puts_recursion(s + 1);
}
}


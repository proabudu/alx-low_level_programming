#include <stddef.h> 

// For NULL definition
// Base case: if the pointer is NULL or pointing to the end of the string, print a new line and return
// Print the current character and call the function recursively with the next character in the string
// Helper function to mimic the _putchar function, as we cannot use the standard putchar.
// Implementation of _putchar will depend on the specific requirements of the environment you are running this code in.
// For simplicity, let's assume it prints directly to the console.
void _putchar(char c);
void _puts_recursion(char *s);
void _puts_recursion(char *s)
{
if (s == NULL || *s == '\0') {
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
void _putchar(char c) 
{
putchar(c);
}


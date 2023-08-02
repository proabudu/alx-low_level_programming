#include "main.h"
int _strlen_recursion(char *s)
{
/* If we've rd the end of the string, return 0 */
if (*s == '\0')
return (0);
/* Recursively call the function with the next character and add 1 to the result */
return (_strlen_recursion(s + 1) + 1);
}


#include "main.h"

int _strlen_recursion(char *s)
{
/* If we've reached the end of the string, return 0 */
if (*s == '\0')
return (0);
/* Recll the function  1 to the result */
return (_strlen_recursion(s + 1) + 1);
}


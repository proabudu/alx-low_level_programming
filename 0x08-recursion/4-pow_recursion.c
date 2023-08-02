#include "main.h"
int _pow_recursion(int x, int y)
{
/* If y is less than 0, return -1 to indicate an error */
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}


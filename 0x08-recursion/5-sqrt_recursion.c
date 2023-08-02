#include "main.h"
int _sqrt_recursion(int n)
{
/* If n is less than 0, return -1 to indicate an error */
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
int i = _sqrt_recursion(n / 2);
if (i * i == n)
return (i);
else
return (-1);
}


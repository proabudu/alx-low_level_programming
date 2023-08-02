#include "main.h"

int factorial(int n)
{
/* If n is less than 0, return -1 to indicate an error */
if (n < 0)
return -1;
/* If n is 0 or 1, return 1 */
if (n == 0 || n == 1)
return (1);
return (n * factorial(n - 1));
}


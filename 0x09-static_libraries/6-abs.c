#include <stdio.h>
/**
* 6-abs.c - A function that computes the absolute value of an integer
* @n: The integer to compute
*
* Return: The absolute value of n
*/
int _abs(int n)
{
  /* Check if n is negative */
if (n < 0)
{
/* Return the opposite of n */
return (-n);
}
/* Otherwise, n is positive or zero */
else
{
/* Return n as it is */
return (n);
}
}

#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 *
 * @s: pointer to the string.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
 int sign = 1;
int res = 0;
int i = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
res = res * 10 + s[i] - '0';
if (res != 0 && !(s[i] >= '0' && s[i] <= '9'))
break;
i++;
}
return (sign * res);
}


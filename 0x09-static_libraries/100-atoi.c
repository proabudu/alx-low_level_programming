#include <stdio.h>
#include <stdlib.h>
// A function that converts a string to an integer
int _atoi(char *s)
{
int sign = 1; // The sign of the number
int num = 0; // The number value
int i = 0; // The index of the string
// Skip any non-digit characters until the first digit or sign
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
// If the character is a minus sign, flip the sign
if (s[i] == '-')
{
sign *= -1;
}
i++;
}
// Convert the digits to a number
while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
// Multiply the previous number by 10 and add the current digit
num = num * 10 + (s[i] - '0');
i++;
}
// Return the number with the sign
return (num * sign);
}
// A main function to test the _atoi function
int main(void)
{
char *s = "98 Battery Street";
int n;
n = _atoi(s);
printf("%s -> %d\n", s, n);
return (0);
}

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
/**
 * is_digit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}
/**
 * is_number - checks if a string is a number
 * @s: string to check
 *
 * Return: 1 if s is a number, 0 otherwise
 */
int is_number(char *s)
{
while (*s)
{
if (!is_digit(*s))
return (0);
s++;
}
return (1);
}
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (is_digit(*s))
num = num * 10 + (*s - '0');
else if (num > 0)
break;
s++;
}
return (sign * num);
}
/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
unsigned int num;
if (n < 0)
{
_putchar('-');
num = -n;
}
else
num = n;
if (num / 10)
print_number(num / 10);
_putchar((num % 10) + '0');
}
/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
if (!is_number(argv[1]) || !is_number(argv[2]))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 * num2;
print_number(result);
_putchar('\n');
return (0);
}


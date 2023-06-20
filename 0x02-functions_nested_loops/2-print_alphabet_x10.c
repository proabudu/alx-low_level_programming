#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 */
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
}
_putchar('\n');
}

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
/* Replace the code below with your own implementation of _putchar */
/* You can use any method you prefer to print a single character */
return (write(1, &c, 1));
}


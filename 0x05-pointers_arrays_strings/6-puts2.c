#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting with the first character,
 * followed by a new line.
 *
 * @str: pointer to the string.
 *
 * Return: void.
 */
void puts2(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i += 2)
putchar(str[i]);
putchar('\n');
}


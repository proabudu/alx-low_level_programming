#include <unistd.h>
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string in reverse followed by a new line to the standard output.
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
length++;
for (i = length - 1; i >= 0; i--)
write(1, &s[i], 1);
write(1, "\n", 1);
}


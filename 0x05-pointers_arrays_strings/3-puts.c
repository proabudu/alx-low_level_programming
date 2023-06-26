#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string followed by a new line to the standard output.
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
write(1, "\n", 1);
}


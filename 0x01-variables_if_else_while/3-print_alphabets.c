#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 * Return: 0 if successful
 */
int main(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    c = 'A';
    while (c <= 'Z')
    {
        putchar(c);
        c++;
    }
    putchar('\n');
    return (0);
}


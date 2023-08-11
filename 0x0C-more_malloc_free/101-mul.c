#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
        printf("Error\n");
        exit(98);
    }

    if (!is_number(argv[1]) || !is_number(argv[2]))
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;

    printf("%d\n", result);

    return (0);
}


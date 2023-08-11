#include <stdio.h>

/**
 * main - checks if a number is positive or negative
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int num;

    if (argc != 2)
    {
        printf("Usage: %s <num>\n", argv[0]);
        return (1);
    }

    num = atoi(argv[1]);

    if (num > 0)
        printf("%d is positive\n", num);
    else if (num < 0)
        printf("%d is negative\n", num);
    else
        printf("%d is zero\n", num);

    return (0);
}


#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0 if successful
 */
int main(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        printf("%d", i);
        i++;
    }
    printf("\n");
    return (0);
}


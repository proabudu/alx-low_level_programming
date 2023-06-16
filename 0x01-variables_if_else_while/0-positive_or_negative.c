#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether a random number is positive or negative
 * Return: 0 if successful
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("Number %d", n);
    if (n > 0)
        printf(" is positive\n");
    else if (n == 0)
        printf(" is zero\n");
    else
        printf(" is negative\n");
    return (0);
}


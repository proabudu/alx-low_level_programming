#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int sum;
char c;
srand(time(NULL));
while (sum < 2772)
{
c = rand() % 127;
if (c < 33)
continue;
putchar(c);
sum += c;
}
putchar(2772 - sum);
return (0);
}


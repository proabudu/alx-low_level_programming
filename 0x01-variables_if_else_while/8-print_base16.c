#include <stdio.h>

int main(void)
{
    int i;

    i = 0;
    while (i < 16)
    {
        if (i < 10)
            putchar(i + '0');
        else
            putchar(i - 10 + 'a');
        i++;
    }
    putchar('\n');
    return (0);
}


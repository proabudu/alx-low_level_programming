#include <stdio.h>

int main()
{
    int sum = 0; // variable to store the sum
    int limit = 1024; // upper limit of the range
    int i; // loop counter

    // loop through all the numbers from 1 to limit-1
    for (i = 1; i < limit; i++)
    {
        // check if i is a multiple of 3 or 5
        if (i % 3 == 0 || i % 5 == 0)
        {
            // add i to the sum
            sum += i;
        }
    }

    // print the sum followed by a new line
    printf("%d\n", sum);

    return 0;
}


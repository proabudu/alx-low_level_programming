#include <stdio.h>

void _putchar(char c);

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
    }

    int row, col;

    for (row = 0; row <= n; row++) {
        for (col = 0; col <= n; col++) {
            int result = row * col;

            // Print tens digit if non-zero
            if (result >= 10) {
                _putchar((result / 10) + '0');
            }

            _putchar((result % 10) + '0');  // Print units digit

            // Print comma and space unless it's the last column
            if (col != n) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}


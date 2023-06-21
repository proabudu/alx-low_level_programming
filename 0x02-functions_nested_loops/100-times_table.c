void _putchar(char c);

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
    }

    int row, col;

    for (row = 0; row <= n; row++) {
        for (col = 0; col <= n; col++) {
            int result = row * col;
            if (result < 10) {
                _putchar(result + '0');
            } else {
                _putchar((result / 10) + '0');
                _putchar((result % 10) + '0');
            }
            _putchar(',');
            _putchar(' ');
        }
        _putchar('\n');
    }
}


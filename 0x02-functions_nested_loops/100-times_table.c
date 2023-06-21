#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 */
void print_times_table(int n) {
  if (n < 0 || n > 15) {
    return;
  }

  for (int i = 0; i <= 15; i++) {
    int product = i * n;
    _putchar('0' + i);
    _putchar(' ');
    _putchar('*');
    _putchar(' ');
    _putchar('0' + n);
    _putchar(' ');
    _putchar('=');
    _putchar(' ');
    _putchar('0' + product);
    _putchar('\n');
  }
}


include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  // Check the number of arguments
  if (argc != 3) {
    printf("Error\n");
    exit(98);
  }

  // Check if num1 and num2 are only composed of digits
  for (int i = 0; i < strlen(argv[1]); i++) {
    if (argv[1][i] < '0' || argv[1][i] > '9') {
      printf("Error\n");
      exit(98);
    }
  }

  for (int i = 0; i < strlen(argv[2]); i++) {
    if (argv[2][i] < '0' || argv[2][i] > '9') {
      printf("Error\n");
      exit(98);
    }
  }

  // Calculate the product
  int product = 0;
  for (int i = 0; i < strlen(argv[1]); i++) {
    int carry = 0;
    for (int j = 0; j < strlen(argv[2]); j++) {
      int digit1 = argv[1][i] - '0';
      int digit2 = argv[2][j] - '0';
      int productDigit = digit1 * digit2 + carry;
      carry = productDigit / 10;
      productDigit %= 10;
      product = product * 10 + productDigit;
    }
    if (carry > 0) {
      product = product * 10 + carry;
    }
  }

  // Print the result
  for (int i = 0; i < strlen(argv[1]) + strlen(argv[2]); i++) {
    _putchar(product % 10 + '0');
    product /= 10;
  }

  _putchar('\n');

  return 0;
}


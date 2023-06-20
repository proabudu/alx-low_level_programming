#include <iostream>

int print_last_digit(int number) {
int lastDigit = number % 10;
std::cout << "The last digit is: " << lastDigit << std::endl;
return lastDigit;
}
int main() {
int number;
std::cout << "Enter a number: ";
std::cin >> number;
print_last_digit(number);
return 0;
}


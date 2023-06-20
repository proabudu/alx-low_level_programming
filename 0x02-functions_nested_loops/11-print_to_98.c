#include <iostream>

void print_to_98(int n) {
    while (n != 99) {
        std::cout << n;
        if (n != 98) {
            std::cout << ", ";
        }
        if (n < 98) {
            n++;
        } else {
            n--;
        }
    }
    std::cout << std::endl;
}


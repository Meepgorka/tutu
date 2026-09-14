#include "sdt.h"
#include <iostream>

// учебная программа
int main() {
    int a, b;
    std::cout << "Enter A and B: ";
    std::cin >> a >> b;

    std::cout << "A+B=" << a + b << '\n';
    std::cout << "A-B=" << a - b << '\n';
    std::cout << "Proizvedenie: " << a * b << '\n';
    std::cout << "Chastnoe: " << a / b << '\n';
}

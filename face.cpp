#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    std::cout << "Enter a number to find its factorial: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers.";
    } else {
        std::cout << "Factorial of " << number << " is: " << factorial(number);
    }

    return 0;
}

#include <iostream>

// Recursive Fibonacci function
int recursiveFibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

// Iterative Fibonacci function
int iterativeFibonacci(int n) {
    if (n <= 1)
        return n;

    int fib1 = 0, fib2 = 1, fib;
    for (int i = 2; i <= n; ++i) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    return fib2;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1;
    }

    std::cout << "Recursive Fibonacci(" << n << "): " << recursiveFibonacci(n) << std::endl;
    std::cout << "Iterative Fibonacci(" << n << "): " << iterativeFibonacci(n) << std::endl;

    return 0;
}

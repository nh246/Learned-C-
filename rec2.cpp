#include <iostream>

int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    return 0;
}

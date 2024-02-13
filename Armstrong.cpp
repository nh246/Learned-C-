#include <iostream>
#include <cmath>

bool isArmstrong(int n) {
    // Convert integer to string to extract digits
    std::string n_str = std::to_string(n);
    // Calculate the number of digits (k)
    int k = n_str.length();
    // Initialize sum
    int armstrong_sum = 0;
    // Iterate through each digit
    for (char digit : n_str) {
        // Convert digit back to integer and raise to the power of k
        armstrong_sum += std::pow(digit - '0', k);
    }
    // Check if the sum equals the original number
    return armstrong_sum == n;
}

int main() {
    int n = 1634;
    std::cout << std::boolalpha << isArmstrong(n) << std::endl; // Output: true
    return 0;
}

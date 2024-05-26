#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", number, factorial(number));
    }

    return 0;
}

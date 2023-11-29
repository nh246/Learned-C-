#include<iostream>
using namespace std;

class FactorialCalculator {
private:
    int number;
    long long factorial;

public:
    // Constructor to initialize the number and calculate the factorial
    FactorialCalculator(int num) {
        number = num;
        factorial = 1;

        // Calculate factorial in the constructor
        calculateFactorial();
    }

    // Function to calculate factorial
    void calculateFactorial() {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
    }

    // Function to display the result
    void displayResult() {
        cout << "Factorial of " << number << " is: " << factorial << endl;
    }
};

int main() {
    int num;

    // Input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Create an object of the FactorialCalculator class
    FactorialCalculator factCalculator(num);

    // Display the result using the displayResult() function
    factCalculator.displayResult();

    return 0;
}

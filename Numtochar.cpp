#include <iostream>
#include <cctype>

int alphabetToNumber(char letter) {
    // Convert uppercase letter to corresponding numeric value
    if (isupper(letter)) {
        return letter - 'A' + 1;
    }
    // Convert lowercase letter to corresponding numeric value
    else if (islower(letter)) {
        return letter - 'a' + 1;
    }
    // Return -1 for non-alphabetic characters
    else {
        return -1;
    }
}

int main() {
    char inputLetter;

    // Get user input
    std::cout << "Enter an alphabet: ";
    std::cin >> inputLetter;

    // Convert and display the result
    int result = alphabetToNumber(inputLetter);
    if (result != -1) {
        std::cout << "Numeric value of " << inputLetter << " is: " << result << std::endl;
    } else {
        std::cout << "Invalid input. Please enter an alphabet." << std::endl;
    }

    return 0;
}

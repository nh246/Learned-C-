#include <iostream>

int main() {
    int rows;

    // Prompt the user to enter the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Loop to iterate over each row
    for (int i = 1; i <= rows; ++i) {
        // Loop to print the stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        // Move to the next line after printing each row
        std::cout << std::endl;
    }

    return 0;
}

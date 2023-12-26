#include <iostream>

int main() {
    int rows;

    // Get the number of rows from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Print the star pattern
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}

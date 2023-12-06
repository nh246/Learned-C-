#include <iostream>

void nStarTriangle(int n) {
    for (int i = 0; i < n; i++) {

        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << "*";
        }

        // Print trailing spaces
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }

        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    nStarTriangle(n);

    return 0;
}

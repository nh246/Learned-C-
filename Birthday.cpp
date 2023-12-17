#include <iostream>

int main() {
    int day, month, year;

    // Get birthdate input
    std::cout << "Enter your birthdate (day month year): ";
    std::cin >> day >> month >> year;

    // Print the birthdate
    std::cout << "Your birthdate is: " << day << "/" << month << "/" << year << std::endl;

    return 0;
}

#include <iostream>
#include <string>

int main() {
    // Input strings
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter the second string: ";
    std::getline(std::cin, str2);

    // Find the first matching part
    size_t pos = str1.find(str2);

    // Check if a match is found
    if (pos != std::string::npos) {
        std::cout << "First matching part: " << str1.substr(pos, str2.length()) << std::endl;
    } else {
        std::cout << "No matching part found." << std::endl;
    }

    return 0;
}

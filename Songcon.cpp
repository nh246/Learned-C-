#include <iostream>

// Function to reverse bits of a 32-bit unsigned integer
uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32; ++i) {
        result <<= 1; // Shift result left to make space for the next bit
        result |= n & 1; // Add the least significant bit of n to result
        n >>= 1; // Shift n right to get the next bit
    }
    return result;
}

int main() {
    uint32_t n;
    std::cout << "Enter a 32-bit unsigned integer: ";
    std::cin >> n;
    
    uint32_t price = reverseBits(n);
    
    std::cout << "Price of each ticket: " << price << std::endl;
    
    return 0;
}

#include <iostream>

int main() {
    const int size = 5; // Change the size according to your array
    int arr[size] = {1, 2, 3, 4, 5}; // Replace with your array

    std::cout << "Non-integer elements in the array: ";

    for (int i = 0; i < size; ++i) {
        if (arr[i] != static_cast<int>(arr[i])) {
            std::cout << arr[i] << " ";
        }
    }

    return 0;
}

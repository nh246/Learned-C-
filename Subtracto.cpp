#include <iostream>

int main() {
    const int size = 5;  // You can change the size of the array
    int array[size] = {1, 2, 3, 4, 5};

    // Subtract 0 from each element in the array
    for (int i = 0; i < size; ++i) {
        array[i] -= 0;
    }

    // Display the modified array
    std::cout << "Modified Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}

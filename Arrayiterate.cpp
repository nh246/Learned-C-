#include <iostream>

int main() {
    // Define an array
    int myArray[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Iterate through the array and print each element
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element at index " << i << ": " << myArray[i] << std::endl;
    }

    return 0;
}

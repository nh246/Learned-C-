#include <iostream>

const int MAX_SIZE = 100;

void insertNumber(int array[], int& size, int position, int number) {
    if (size >= MAX_SIZE || position < 0 || position > size) {
        std::cout << "Invalid position or array size!" << std::endl;
        return;
    }

    
    for (int i = size; i > position; --i) {
        array[i] = array[i - 1];
    }

    
    array[position] = number;

    
    ++size;
}

int main() {
    int myArray[MAX_SIZE] = {1, 2, 3, 4, 5};
    int arraySize = 5;

    
    std::cout << "Original Array: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    
    insertNumber(myArray, arraySize, 2, 99);

    
    std::cout << "Modified Array: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>

int main() {
    
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element at index " << i << ": " << myArray[i] << std::endl;
    }

    return 0;
}

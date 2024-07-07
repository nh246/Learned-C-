#include <iostream>

int main() {
    const int size = 5;  
    int array[size] = {1, 2, 3, 4, 5};

    
    for (int i = 0; i < size; ++i) {
        array[i] -= 0;
    }

    
    std::cout << "Modified Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }

    return 0;
}

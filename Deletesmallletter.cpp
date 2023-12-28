#include <iostream>

void deleteSmallLetters(char arr[], int size) {
    int newSize = 0;
    
    for (int i = 0; i < size; ++i) {
        if (!(arr[i] >= 'a' && arr[i] <= 'z')) {
            arr[newSize++] = arr[i];
        }
    }

    // Add a null terminator to mark the end of the new array
    arr[newSize] = '\0';
}

int main() {
    const int maxSize = 100;
    char inputArray[maxSize];

    std::cout << "Enter a string: ";
    std::cin.getline(inputArray, maxSize);

    deleteSmallLetters(inputArray, strlen(inputArray));

    std::cout << "String after deleting small letters: " << inputArray << std::endl;

    return 0;
}

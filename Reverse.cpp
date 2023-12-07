#include <iostream>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

int main() {
    const int size = 5;  // Change the size as needed
    int myArray[size];

    // Input array elements
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> myArray[i];
    }

    // Reverse the array
    reverseArray(myArray, size);

    // Display reversed array
    std::cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}

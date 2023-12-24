#include <iostream>

int main() {
    const int maxSize = 100; // You can change this based on your array size
    int arr[maxSize];
    int size;

    // Input array size
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Input array elements
    std::cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Input the element to delete
    int elementToDelete;
    std::cout << "Enter the element to delete: ";
    std::cin >> elementToDelete;

    // Find the index of the element to delete
    int deleteIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == elementToDelete) {
            deleteIndex = i;
            break;
        }
    }

    // If the element is found, delete it
    if (deleteIndex != -1) {
        for (int i = deleteIndex; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;

        // Print the updated array
        std::cout << "Array after deletion: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
    } else {
        std::cout << "Element not found in the array.";
    }

    return 0;
}

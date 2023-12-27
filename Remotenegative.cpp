#include <iostream>
#include <vector>

int main() {
    // Sample array with negative numbers
    int arr[] = {1, -2, 3, -4, 5, -6, 7, -8, 9};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Create a vector to store positive numbers
    std::vector<int> positiveNumbers;

    // Iterate through the array and add positive numbers to the vector
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            positiveNumbers.push_back(arr[i]);
        }
    }

    // Display the array without negative numbers
    std::cout << "Array without negative numbers: ";
    for (int num : positiveNumbers) {
        std::cout << num << " ";
    }

    return 0;
}

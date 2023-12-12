#include <iostream>
using namespace std;

int main() {
    const int maxSize = 10; // You can adjust the size according to your needs
    int arr[maxSize];
    int num, size = 0;

    // Input the number to push into the array
    cout << "Enter a number to push into the array: ";
    cin >> num;

    // Check if the array is not full
    if (size < maxSize) {
        // Push the number into the array
        arr[size] = num;
        size++;

        // Display the updated array
        cout << "Array after pushing the number: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Array is full. Cannot push more numbers.";
    }

    return 0;
}

#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == key)
            return mid;

        // If the element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > key)
            high = mid - 1;

        // Else the element can only be present in right subarray
        else
            low = mid + 1;
    }

    // If the element is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");
    return 0;
}

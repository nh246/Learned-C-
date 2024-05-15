#include <stdio.h>

// Function to find the maximum and minimum using Divide and Conquer
void findMaxMin(int arr[], int low, int high, int *max, int *min) {
    if (low == high) { // Base case: Only one element in the array
        *max = *min = arr[low];
        return;
    }

    if (high == low + 1) { // Array has two elements
        if (arr[low] > arr[high]) {
            *max = arr[low];
            *min = arr[high];
        } else {
            *max = arr[high];
            *min = arr[low];
        }
        return;
    }

    int mid = (low + high) / 2;
    int leftMax, leftMin, rightMax, rightMin;

    // Divide the array into two halves and recursively find max and min in each half
    findMaxMin(arr, low, mid, &leftMax, &leftMin);
    findMaxMin(arr, mid + 1, high, &rightMax, &rightMin);

    // Compare the results from two halves to find overall max and min
    if (leftMax > rightMax)
        *max = leftMax;
    else
        *max = rightMax;

    if (leftMin < rightMin)
        *min = leftMin;
    else
        *min = rightMin;
}

int main() {
    int arr[] = {3, 6, 1, 8, 2, 4, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMaxMin(arr, 0, n - 1, &max, &min);

    printf("Maximum element in the array: %d\n", max);
    printf("Minimum element in the array: %d\n", min);

    return 0;
}

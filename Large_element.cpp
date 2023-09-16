#include <stdio.h>

int main() {
    int arr[] = {10, 25, 5, 42, 8, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Initialize the largest variable to the first element of the array
    int largest = arr[0];
    
    // Loop through the array to find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    // Print the largest element
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}

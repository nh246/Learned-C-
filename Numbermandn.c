#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = *min = arr[0]; // Assume the first element as both max and min initially

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Update max if a larger element is found
        } else if (arr[i] < *min) {
            *min = arr[i]; // Update min if a smaller element is found
        }
    }
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max, min;
    findMaxMin(arr, size, &max, &min);

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Measure time taken for bubble sort
    clock_t start_bubble = clock();
    bubbleSort(arr, n);
    clock_t end_bubble = clock();
    double time_bubble = ((double) (end_bubble - start_bubble)) / CLOCKS_PER_SEC;
    printf("Time taken by Bubble Sort: %f seconds\n", time_bubble);

    // Measure time taken for quick sort
    clock_t start_quick = clock();
    quickSort(arr, 0, n - 1);
    clock_t end_quick = clock();
    double time_quick = ((double) (end_quick - start_quick)) / CLOCKS_PER_SEC;
    printf("Time taken by Quick Sort: %f seconds\n", time_quick);

    free(arr);
    return 0;
}

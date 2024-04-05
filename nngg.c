#include <stdio.h>

int main() {
    int arr[] = {5, -3, 7, -8, 0, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Negative numbers in the array are: ");
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

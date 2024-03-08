#include <stdio.h>
#include <stdlib.h>

int* unionOfArrays(int* a, int n, int* b, int m, int* size) {
    int* unionArray = (int*)malloc((n + m) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            unionArray[k++] = a[i++];
        } else if (a[i] > b[j]) {
            unionArray[k++] = b[j++];
        } else {
            unionArray[k++] = a[i++];
            j++;
        }
    }

    while (i < n) {
        unionArray[k++] = a[i++];
    }

    while (j < m) {
        unionArray[k++] = b[j++];
    }

    // Remove duplicates
    int newSize = 0;
    for (int idx = 0; idx < k; idx++) {
        if (idx == 0 || unionArray[idx] != unionArray[idx - 1]) {
            unionArray[newSize++] = unionArray[idx];
        }
    }

    *size = newSize;
    return unionArray;
}

int main() {
    int n = 5, m = 3;
    int a[] = {1, 2, 3, 4, 6};
    int b[] = {2, 3, 5};

    int size;
    int* result = unionOfArrays(a, n, b, m, &size);

    printf("Union of arrays: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // Free the allocated memory

    return 0;
}

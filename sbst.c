#include <stdio.h>

#define MAX_SIZE 100

int set[MAX_SIZE]; // Array to store the input set
int subset[MAX_SIZE]; // Array to store the subset
int n; // Size of the set
int sum; // Target sum

void generateSubset(int depth, int currentSum, int start) {
    if (currentSum == sum) { // If the subset sum equals the target sum
        printf("{ ");
        for (int i = 0; i < depth; i++) {
            printf("%d ", subset[i]);
        }
        printf("}\n");
        return;
    }

    for (int i = start; i < n; i++) {
        if (currentSum + set[i] <= sum) {
            subset[depth] = set[i];
            generateSubset(depth + 1, currentSum + set[i], i + 1);
        }
    }
}

void subsetSum() {
    generateSubset(0, 0, 0);
}

int main() {
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &sum);

    printf("Subsets with sum equal to %d are:\n", sum);
    subsetSum();

    return 0;
}

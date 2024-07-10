#include <stdio.h>

#define MAX_SIZE 100

int set[MAX_SIZE]; 
int subset[MAX_SIZE]; 
int n; 
int sum;
int nums;

void generateSubset(int depth, int currentSum, int start) {
    if (currentSum == sum) { 
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

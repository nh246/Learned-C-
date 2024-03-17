#include <stdio.h>
#include <limits.h>

#define SIZE 3

float optimalBST(float keys[], float freq[]) {
    float cost[SIZE][SIZE];
    int i, j, L, r;

    for (i = 0; i < SIZE; ++i)
        cost[i][i] = freq[i];

    for (L = 2; L <= SIZE; ++L) {
        for (i = 0; i <= SIZE - L; ++i) {
            j = i + L - 1;
            cost[i][j] = INT_MAX;
            for (r = i; r <= j; ++r) {
                float c = ((r > i) ? cost[i][r - 1] : 0) +
                          ((r < j) ? cost[r + 1][j] : 0) +
                          freq[r];
                if (c < cost[i][j])
                    cost[i][j] = c;
            }
        }
    }
    return cost[0][SIZE - 1];
}

int main() {
    float keys[SIZE] = {10, 12, 20};
    float freq[SIZE] = {34, 8, 50};
    printf("Cost of optimal BST is: %f\n", optimalBST(keys, freq));
    return 0;
}

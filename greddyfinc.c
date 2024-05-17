#include <stdio.h>

#define MAX_ITEMS 100

typedef struct {
    int weight;
    int value;
    float ratio; // Ratio of value to weight
} Item;

// Function to swap two items
void swap(Item *a, Item *b) {
    Item temp = *a;
    *a = *b;
    *b = temp;
}

// Function to solve Fractional Knapsack problem
float fractionalKnapsack(int capacity, Item items[], int n) {
    // Calculate the ratio of value to weight for each item
    for (int i = 0; i < n; i++) {
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    // Sort items based on ratio in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].ratio < items[j + 1].ratio) {
                swap(&items[j], &items[j + 1]);
            }
        }
    }

    float totalValue = 0.0;
    int currentWeight = 0;

    // Loop through each item and add it to knapsack if possible
    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            int remainingWeight = capacity - currentWeight;
            totalValue += items[i].ratio * remainingWeight;
            break;
        }
    }

    return totalValue;
}

int main() {
    int capacity, n;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);
    printf("Enter the number of items: ");
    scanf("%d", &n);

    Item items[MAX_ITEMS];
    printf("Enter the weight and value of each item:\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d: ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    float maxValue = fractionalKnapsack(capacity, items, n);
    printf("Maximum value that can be obtained = %.2f\n", maxValue);

    return 0;
}

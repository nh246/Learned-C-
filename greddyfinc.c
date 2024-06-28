#include <stdio.h>

#define MAX_ITEMS 100

typedef struct {
    int weight;
    int value;
    float ratio;
} Item;




void swap(Item *a, Item *b) {
    Item temp = *a;
    *a = *b;
    *b = temp;
}

float fractionalKnapsack(int capacity, Item items[], int n) {
    
    for (int i = 0; i < n; i++) {
        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].ratio < items[j + 1].ratio) {
                swap(&items[j], &items[j + 1]);
            }
        }
    }

    float totalValue = 0.0;
    int currentWeight = 0;

    
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

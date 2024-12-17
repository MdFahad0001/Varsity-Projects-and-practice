#include <stdio.h>

struct Item {
    int profit;
    int weight;
    float value_per_unit;
};

void swap(struct Item *a, struct Item *b) {
    struct Item temp = *a;
    *a = *b;
    *b = temp;
}

void sortItems(struct Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].value_per_unit < items[j + 1].value_per_unit) {
                swap(&items[j], &items[j + 1]);
            }
        }
    }
}

float fractionalKnapsack(struct Item items[], int n, int capacity) {
    sortItems(items, n);

    float totalProfit = 0.0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= capacity) {
            totalProfit += items[i].profit;
            capacity -= items[i].weight;
        } else {
            totalProfit += (float)capacity / items[i].weight * items[i].profit;
            break;
        }
    }

    return totalProfit;
}

int main() {
    struct Item items[] = {
        {32, 7},
        {21, 6},
        {16, 4},
        {10, 2}
    };

    int n = sizeof(items) / sizeof(items[0]);
    int capacity = 10;

    float maxProfit = fractionalKnapsack(items, n, capacity);

    printf("Maximum Profit: %.2f\n", maxProfit);

    return 0;
}

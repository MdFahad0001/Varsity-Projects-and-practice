#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
    double valuePerWeight;
};

bool compare(Item i1, Item i2){
    return i1.valuePerWeight > i2.valuePerWeight;
}

double fractionalKnapSack(int W, int w[], int v[], int n) {
    Item k[n];

    for (int i = 0; i < n; i++){
        k[i].value = v[i];
        k[i].weight = w[i];
        k[i].valuePerWeight = static_cast<double>(v[i]) / w[i];
    }

    sort(k, k + n, compare);

    double totalValue = 0.0;

    for (int i = 0; i < n; i++){
        if (W >= k[i].weight) {
            totalValue += k[i].value;
            W -= k[i].weight;
        } else {

            totalValue += (static_cast<double>(W) / k[i].weight) * k[i].value;
            break;
        }
    }

    return totalValue;
}

int main() {
    const int n = 4;
    int v[] = {32, 21, 16, 10};
    int w[] = {7, 6, 4, 2};
    cout << "Enter the capacity of knapsack: ";
    int W;
    cin >> W;

    cout << "Maximum value in knapsack: " << fractionalKnapSack(W, w, v, n) << endl;

    return 0;
}

#include<iostream>
using namespace std;

int max(int x, int y) {return (x>y) ? x:y;}

int knapSack(int W,int w[],int v[], int n){
    int i,wt;
    int K[n+1][W+1];
    for(i = 0;i <= n; i++){
        for(wt = 0;wt <=W; wt++){
            if(i == 0 || wt == 0)
                K[i][wt] = 0;
            else if (w[i - 1] <= wt)
                K[i][wt] = max(v[i - 1] + K[i - 1][wt - w[i - 1]], K[i - 1][wt]);
            else
                K[i][wt]= K[i - 1][wt];
        }
    }
    return K[n][W];
}

int main(){

    const int n = 4;
    int v[] = {32,21,16,10};
    int w[] = {7,6,4,2};

    cout << "Enter the capacity of Knapsack: ";
    int W;
    cin >> W;

    cout<< "Maximum value in knapsack : " << knapSack(W,w,v,n) << endl;

    return 0;



}

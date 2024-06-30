// https://codeforces.com/problemset/problem/160/A

#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &arr, int n) {
    for (int i=n-1; i>=0; i--) {
        int didSwap = 0;
        for (int j=0; j<=i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) // time optimisation [best case scenario O(n)]
            break;  
    }
}

int main(){
    int n, sum=0;
    cin >> n;
    vector<int> coins(n);
    for(int i=0; i<n; i++)
        cin >> coins[i];

    for(int i=0; i<n; i++)
        sum = sum + coins[i];
    int amount = sum/2;

    // sort the array
    bubble_sort(coins, n);

    // check
    sum = 0;
    for(int i=n-1; i>=0; i--){
        sum = sum + coins[i];
        if (sum > amount) {
            cout << n - i << endl;
            return 0;
        }
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t, sum=0, multiple;
    cin >> t;
    vector<int> n(t);

    for (int i = 0; i < t; ++i) {
        cin >> n[i];
    }

    // (1 ≤ t ≤ 100)    
    // (2 ≤ n ≤ 100)

    for (int i = 0; i < t; i++) {
        int maxSum = 0;
        int optimalX = 2;
        
        for (int x = 2; x <= n[i]; x++) {
            int sum = 0;
            for (int k = 1; k * x <= n[i]; k++) {
                sum += k * x;
            }
            if (sum > maxSum) {
                maxSum = sum;
                optimalX = x;
            }
        }
        
        cout << optimalX << endl;
    }

    return 0;
}
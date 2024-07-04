// https://codeforces.com/problemset/problem/1475/A

#include<iostream>
#include<vector>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(long long n) {
    return (n & (n - 1)) == 0; // single & performs a bitwise AND operation
    // 8 & 7 ~ 1000 & 0111 == 0 ~ true
}

int main() {
    int t;
    cin >> t;
    vector<long long> numbers(t);
    for (int i = 0; i < t; i++)
        cin >> numbers[i];

    for (int i = 0; i < t; i++) {
        if (isPowerOfTwo(numbers[i]))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}

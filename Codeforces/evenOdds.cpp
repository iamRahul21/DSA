// https://codeforces.com/problemset/problem/318/A

#include<iostream>
using namespace std;

int main() {
    long long n, k, mid;
    cin >> n >> k;

    mid = (n + 1) / 2;

    if (k <= mid)
        cout << 2 * k - 1 ;
    else
        cout << 2 * (k - mid);
    
    return 0;
}
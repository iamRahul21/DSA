// https://codeforces.com/problemset/problem/1/A

#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> m >> n >> a;

    long long M = (m + a - 1) / a;
    long long N = (n + a - 1) / a;

    cout << M * N << endl;

    return 0;
}

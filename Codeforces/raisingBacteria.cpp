// https://codeforces.com/problemset/problem/579/A

#include <iostream>
using namespace std;

int find(int a) {
    int ans = 0, num = 1;
    while (num <= a) {
        num = num * 2;
    }
    if (num / 2 == a) {
        return 1;
    } else {
        ans = a - (num / 2);
        ans = 1 + find(ans);
        return ans;
    }
}

int main() {
    int input, output;
    cin >> input;

    output = find(input);
    cout << output;
    return 0;
}
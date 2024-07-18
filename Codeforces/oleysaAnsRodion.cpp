// https://codeforces.com/problemset/problem/584/A

#include <iostream>
using namespace std;

string find_number(int n, int t) {
    if (t > 9 && n == 1) {
        return "-1";
    }
    
    // Start with the smallest n-digit number, which is 10^(n-1)
    long long smallest_n_digit_number = 1;
    for (int i = 1; i < n; ++i) {
        smallest_n_digit_number *= 10;
    }
    
    // Find the smallest n-digit number that is divisible by t
    long long number = smallest_n_digit_number;
    while (number % t != 0 && number < smallest_n_digit_number * 10) {
        number++;
    }
    
    
}

int main() {
    int n, t;
    cin >> n >> t;
    
    string result = find_number(n, t);
    cout << result << endl;
    
    return 0;
}

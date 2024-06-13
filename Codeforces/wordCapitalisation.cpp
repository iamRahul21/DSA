// https://codeforces.com/problemset/problem/281

#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int first = s[0];
    if((122 >= first) && (first >= 97)) {
        s[0] = first - 32;
    }
    
    cout << s;
    return 0;
}
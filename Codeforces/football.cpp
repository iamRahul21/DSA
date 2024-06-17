// https://codeforces.com/problemset/problem/96/A

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s, substr1 = "0000000", substr2 = "1111111";
    cin >> s;

    size_t pos1 = s.find(substr1); // size_t: unsigned integer type
    size_t pos2 = s.find(substr2);
    if (pos1 != string::npos || pos2 != string::npos)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
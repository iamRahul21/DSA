// https://codeforces.com/problemset/problem/236/A

#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    // pre-compute
    int count = 0, hash[26] = {0};
    for (int i=0; i<s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    for (int i=0; i<26; i++) {
        if(hash[i] != 0) {
            count++;
        }
    }

    if(count%2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
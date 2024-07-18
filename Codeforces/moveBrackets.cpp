// https://codeforces.com/problemset/problem/1374/C

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<pair<int, string>> brackets(t);
    for (int i = 0; i < t; ++i) {
        cin >> brackets[i].first;
        cin >> brackets[i].second;
    }

    for (int i = 0; i < t; ++i)
        cout << brackets[i].first << ": " << brackets[i].second << endl;
        
    return 0;
}
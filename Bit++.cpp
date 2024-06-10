// https://codeforces.com/problemset/problem/282/A

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n, value = 0;
    cin >> n;
    cin.ignore();
    vector<string> operation(n);

    for (int i = 0; i < n; i++) {
        getline(cin, operation[i]);
    }

    for (int i =0; i<n; i++) {
        if ((operation[i][0]=='+' && operation[i][1] =='+') || (operation[i][1]=='+' && operation[i][2] =='+')) {
            value++;
        }
        if ((operation[i][0]=='-' && operation[i][1] =='-') || (operation[i][1]=='-' && operation[i][2] =='-')) {
            value--;
        }
    }

    // in this way it checks if the substrings '++' and '--' are present in the string and do the operations accordingly
    // for (int i = 0; i < n; i++) {
    //     if (operation[i].find("++") != string::npos) {
    //         value++;
    //     } else if (operation[i].find("--") != string::npos) {
    //         value--;
    //     }
    // }

    cout << value;
    return 0;
}
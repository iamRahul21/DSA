// https://codeforces.com/problemset/problem/231/A

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int n, count=0, questions=0;
    cin >> n;
    cin.ignore(); // Ignore the newline character left in the input buffer
    vector<string> surety(n);

    for (int i = 0; i < n; i++) {
        getline(cin, surety[i]);
    }

    for (int i=0; i<n; i++) {
        count = 0;
        for(int j=0; j<surety[i].size(); j++) {
            if(surety[i][j]=='1') {
                count++;
            }
        }
        if(count>=2) {
            questions++;
        }
    }
    
    cout << questions;

    return 0;
}
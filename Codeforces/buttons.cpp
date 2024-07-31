// https://codeforces.com/problemset/problem/1858/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> winner(t);
    for(int i=0; i<t; i++){
        long long a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2 != 0) {
            winner[i] = "First";
        } else {
            winner[i] = "Second";
        }
    }

    for(int i = 0; i < t; i++) {
        cout << winner[i] << endl;
    }
    return 0;
}
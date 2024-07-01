// https://codeforces.com/problemset/problem/580/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, max_length = 1, current_length = 1;
    cin >> n;
    vector<int> money(n);
    for(int i=0; i<n; i++)
        cin >> money[i];

    for(int i=0; i<n; i++){
        if(money[i]>=money[i-1]){
            current_length++;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }
    max_length = max(max_length, current_length);
    cout << max_length;

    return 0;
}
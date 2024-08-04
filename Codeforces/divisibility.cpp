// https://codeforces.com/problemset/problem/1328/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<long long> ans(t);
    for(int i=0; i<t; i++){
        long long a, b, temp=0;
        cin >> a >> b;
        if (a % b == 0)
            ans[i] = 0;
        else
            ans[i] = b - (a % b);
    }

    for(int i=0; i<t; i++)
        cout << ans[i] << endl;
    return 0;
}
// https://codeforces.com/problemset/problem/124/A

#include<iostream>
using namespace std;

int main(){
    int n, a, b, ans=1;
    cin >> n >> a >> b;
    for(int i=0; i<n; i++){
        if(i>a && i>=(n-b)){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
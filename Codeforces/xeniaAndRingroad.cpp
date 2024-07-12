// https://codeforces.com/problemset/problem/339/B

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, current=1;
    long long time=0;
    cin >> n >> m;
    vector<int> a(m);
    for(int i=0; i<m; i++)
        cin >> a[i];

    for(int i=0; i<m; i++){
        if(a[i]>=current)
            time = a[i]-current + time;
        else
            time = n - current + a[i] + time;
        current = a[i]; 
    }

    cout << time;
    return 0;
}
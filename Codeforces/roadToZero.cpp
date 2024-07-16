// https://codeforces.com/problemset/problem/1342/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<long long> amount(t);
    for(int i=0; i<t; i++){
        long long x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        
        if(x > y) 
            swap(x, y);

        if (2 * a <= b)
            amount[i] = (x + y) * a;
        else
            amount[i] = x * b + (y - x) * a;
    }
    for(int i=0; i<t; i++)
        cout << amount[i] << endl;
    return 0;
}
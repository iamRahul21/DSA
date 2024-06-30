// https://codeforces.com/problemset/problem/546/A

#include<iostream>
using namespace std;

int main(){
    // the cost of the first banana, initial number of dollars the soldier has, number of bananas he wants.
    int k, n, w, price=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
        price = price + k*i;
    if(price>n)
        cout << price-n;
    else
        cout << 0;
    return 0;
}
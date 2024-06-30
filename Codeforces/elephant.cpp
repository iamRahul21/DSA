// https://codeforces.com/problemset/problem/617/A

#include<iostream>
using namespace std;

int main() {
    int x, sum=0, step=0;
    cin >> x;

    for(int i=5; i>=1; i--){
        while(sum<x){
            sum = sum + i;
            if(sum<=x){
                step++;
            }else{
                sum = sum - i;
                break;
            }
        }
    }

    cout << step;
    return 0;
}
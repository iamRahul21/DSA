// https://codeforces.com/problemset/problem/476/A

#include<iostream>
using namespace std;

int main(){
    int n, m, moves;
    cin >> n >> m;
    // n steps. He can climb 1 or 2 steps at each move. number of moves to be a multiple of an integer m.
    if(n<m){
        cout << -1;
        return 0;
    }
    int min = (n + 1) / 2;

    for(int i=0; i<m; i++){
        if(min%m==0){
            cout << min;
            return 0;
        }
        min += 1;
    }
}
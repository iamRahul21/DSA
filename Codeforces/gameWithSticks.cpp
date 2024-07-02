// https://codeforces.com/problemset/problem/451/A

#include<iostream>
using namespace std;

int main(){
    int n, m, diagonal;
    cin >> n >> m;
    
    int moves = min(n, m);

    // If the number of moves (equal to the minimum dimension) is odd, Akshat wins
    if(moves % 2 == 1)
        cout << "Akshat";
    else
        cout << "Malvika";

    return 0;
}
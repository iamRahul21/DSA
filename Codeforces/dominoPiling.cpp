// https://codeforces.com/problemset/problem/50/A

#include<iostream>
using namespace std;

int main() {
    int M, N, domino_area = 2;
    cin >> M >> N; 
    if (M < 1 || M > 16 || N < 1 || N > 16) {
        return 1; // check if the M and N are lies between 1 and 16 inclusive
    }

    int board_area = M*N;
    int count = board_area/domino_area;

    cout << count;
    return 0;
}
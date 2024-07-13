// https://codeforces.com/problemset/problem/379/A

#include<iostream>
using namespace std;

int hours(int a, int b) {
    int totalHours = a;

    while (a >= b) {
        int newCandles = a / b;
        int remainder = a % b;
        totalHours += newCandles;
        a = newCandles + remainder;
    }

    return totalHours;
}

int main(){
    int a, b;
    cin >> a >> b;
    int count = hours(a, b);

    cout << count;
    return 0;
}
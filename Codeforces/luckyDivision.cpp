// https://codeforces.com/problemset/problem/122/A

#include<iostream>
using namespace std;

int main(){
    int num;
    bool flag=false;
    cin >> num;
    // 4, 7, 47, 74, 447, 474, 477, 744, 747, 774 but n<1000
    if(num%4==0 || num%7==0 || num%47==0 || num%74==0 || num%447==0 || num%474==0 || num%477==0)
        flag = true;

    if(flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
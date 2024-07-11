// https://codeforces.com/problemset/problem/479/A

#include<iostream>
using namespace std;

int main(){
    int a, b, c, max;
    cin >> a >> b >> c;
    
    if(a==1 && b==1 && c==1)
        cout << 3;
    else if(a==1 && b!=1 && c!=1)
        if(b>=c)
            cout << b*(c+a);
        else
            cout << c*(b+a);
    else if(a!=1 && b!=1 && c==1)
        if(b>=a)
            cout << b*(c+a);
        else
            cout << a*(b+c);
    else if(a!=1 && b==1 && c!=1)
        if(c>=a)
            cout << c*(b+a);
        else
            cout << a*(b+c);
    else if(a!=1 && b==1 && c==1)
        cout << 2*a;
    else if(a==1 && b==1 && c!=1)
        cout << 2*c;
    else if(a==1 && b!=1 && c==1)
        cout << 2*b;
    else
        cout << a*b*c;

    return 0;
}
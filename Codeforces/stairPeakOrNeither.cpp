// https://codeforces.com/problemset/problem/1950/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> form(t);
    for(int i=0; i<t; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a<b && b<c)
            form[i]="STAIR";
        else if(a<b && b>c)
            form[i]="PEAK";
        else
            form[i]="NONE";
    }
    
    for(int i=0; i<t; i++)
        cout << form[i] << endl;
    return 0;
}
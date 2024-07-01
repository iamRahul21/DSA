// https://codeforces.com/problemset/problem/133/A

#include<iostream>
using namespace std;

int main(){
    bool ans=false;
    string p;
    cin >> p;
    for(int i=0; i<p.size(); i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            cout << "YES";
            ans=false;
            break;
        }  
        else
            ans=true;
    }
    if(ans)
        cout << "NO";
    return 0;
}
// https://codeforces.com/problemset/problem/703/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> score(2, 0);
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        score[0] += a;
        score[1] += b;        
    }

    if(score[0]>score[1]){
        cout << "Mishka";
    }else if(score[0]<score[1]){
        cout << "Chris";
    }else{
        cout << "Friendship is magic!^^";
    }
    return 0;
}
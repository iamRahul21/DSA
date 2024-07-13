// https://codeforces.com/problemset/problem/43/A

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> teams(n);
    for(int i=0; i<n; i++)
        cin >> teams[i];

    string team1=teams[0], team2;
    int count1 = 0, count2 = 0;
    
    for(int i=0; i<n; i++){
        if(teams[i]==team1){
            count1++;
        }else{
            if (count2 == 0)
                team2 = teams[i];
            count2++;
        }
    }

    if(count1>count2)
        cout << team1;
    else
        cout << team2;
    return 0;
}
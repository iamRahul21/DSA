#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector <int> sum(t);
    for(int i=0; i<t; i++){
        int num;
        cin >> num;
        sum[i] = num/10 + num%10;
    }

    for(int i=0; i<t; i++){
        cout << sum[i] << endl;
    }
    return 0;
}
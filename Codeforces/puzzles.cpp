// https://codeforces.com/problemset/problem/337/A

#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        } 
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> pieces(m);
    for(int i=0; i<m; i++)
        cin >> pieces[i];

    insertion_sort(pieces, m);
    int min_diff = pieces[n-1]-pieces[0];
    for(int i=0; (n-1+i)<m; i++){
        if(min_diff>(pieces[n-1+i]-pieces[i]))
            min_diff=pieces[n-1+i]-pieces[i];
    }
    cout << min_diff;
    return 0;
}
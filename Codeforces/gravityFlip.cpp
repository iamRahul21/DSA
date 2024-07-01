// https://codeforces.com/problemset/problem/405/A

#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }

    }
}

int main(){
    int n;
    cin >> n;
    vector<int> box(n);
    for(int i=0; i<n; i++)
        cin >> box[i];

    insertion_sort(box, n);

    for(int i=0; i<n; i++)
        cout << box[i] << " ";
    return 0;
}
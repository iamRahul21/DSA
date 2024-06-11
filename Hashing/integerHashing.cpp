#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0}; // take the maximum number that appear
    // one problem might appear that this array can store only upto 10^6. To store more than we will be needing to declare hash[greater than 10^6] outside int main()
    for (int i=0;i<n; i++) {
        hash[arr[i]] += 1;
    }


    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        // fetch
        cout << "the entered digit appeared on the integer string for " << hash[number] << " times" << endl;
    }
    return 0;
}
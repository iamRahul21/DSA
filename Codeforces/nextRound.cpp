// https://codeforces.com/problemset/problem/158/A\

#include<iostream>
#include<vector>
#include<string>
#include <istream>
using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;
    
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int threshold_score = scores[k-1];

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= threshold_score && scores[i] > 0) {
            ++count;
        }
    }
    
    cout << count << endl;
    return 0;
}
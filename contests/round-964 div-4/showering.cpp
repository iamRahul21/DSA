#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<string> output(t);

    for (int i = 0; i < t; i++) {
        int n, s, m;
        cin >> n >> s >> m;

        vector<int> time(m + 1, 1);

        for (int j = 0; j < n; j++) {
            int l, r;
            cin >> l >> r;
            for (int k = l; k < r; k++)
                time[k] = 0;
        }

        bool canShower = false;

        int start = 0;
        while (start < m) {
            if (time[start] == 1) {
                int end = start;
                while (end < m && time[end] == 1)
                    end++;
                    
                if (end - start >= s) {
                    canShower = true;
                    break;
                }
                start = end;
            } else {
                start++;
            }
        }

        if (canShower)
            output[i] = "YES";
        else
            output[i] = "NO";
    }

    for (const string& res : output)
        cout << res << endl;
    return 0;
}

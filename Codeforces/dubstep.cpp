// https://codeforces.com/problemset/problem/208/A

#include<iostream>
using namespace std;

int main() {
    string input, output;
    cin >> input;
    bool wasSpace = false;

    for (int i = 0; i < input.size(); i++) {
        if (i + 2 < input.size() && input.substr(i, 3) == "WUB") {
            if (!output.empty() && !wasSpace) {
                output.push_back(' ');
                wasSpace = true;
            }
            i += 2;
        } else {
            output.push_back(input[i]);
            wasSpace = false;
        }
    }

    // Trim trailing spaces
    if (!output.empty() && output.back() == ' ') {
        output.pop_back();
    }

    cout << output;
    return 0;
}
// https://codeforces.com/problemset/problem/499/B

#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> word_map;
    for (int i = 0; i < m; ++i) {
        string a, b;
        cin >> a >> b;
        word_map[a] = b;
    }

    cin.ignore();

    string line;
    getline(cin, line);

    stringstream ss(line); // split the input line into words
    vector<string> lecture;
    string word;
    while (ss >> word)
        lecture.push_back(word);

    for (const auto& first_lang : lecture) {
        string second_lang = word_map[first_lang];
        if (first_lang.length() <= second_lang.length()) {
            cout << first_lang << " ";
        } else {
            cout << second_lang << " ";
        }
    }
    cout << endl;

    return 0;
}
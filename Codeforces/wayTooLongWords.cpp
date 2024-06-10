// https://codeforces.com/problemset/problem/71/A

// When you use std::cin >> numberOfStrings;, it leaves a newline character in the input buffer. This newline character is then read by the first call to std::getline, which causes it to consume an empty line and therefore appear as though it only reads 4 strings instead of 5.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, len;
    cin >> n;
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    std::vector<std::string> words(n);

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, words[i]);
    }

    for (int i = 0; i < n; i++) {
        if (words[i].size() <= 10) {
            cout << words[i] << endl;
        }else {
            len = words[i].size() - 2;
            cout << words[i][0] << len << words[i][len + 1] << endl;
        }
    }

    // to print the elements of the array.
    // for (const std::string &str : words)
    // {
    //     std::cout << str << std::endl;
    // }

    // chatGPT:
    // for (const std::string& word : words) {
    //     if (word.size() <= 10) {
    //         cout << word << endl;
    //     } else {
    //         len = word.size() - 2;
    //         cout << word[0] << len << word.back() << endl;
    //     }
    // }

    return 0;
}
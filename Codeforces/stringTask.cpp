// https://codeforces.com/problemset/problem/118/A

#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++)
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' && s[i]!= 'A' && s[i]!= 'E' && s[i]!= 'I' && s[i]!= 'O' && s[i]!= 'U' && s[i]!='Y')
            cout << '.' << static_cast<char>(tolower(s[i])); // it passes all the test cases only when I consider 'y' as vowel

    return 0;
}
// https://codeforces.com/problemset/problem/59/A

#include<iostream>
using namespace std;

void lowercase(string word){
    for (int i=0; i<word.size(); i++) {
        if(64 < int(word[i]) && int(word[i]) < 91){
            int temp = word[i];
            word[i] =  temp+32;
        }
    }
    cout << word;
}

void uppercase(string word){
    for (int i=0; i<word.size(); i++) {
        if(96 < int(word[i]) && int(word[i]) < 123){
            int temp = word[i];
            word[i] =  temp-32;
        }
    }
    cout << word;
}

int main() {
    int up = 0, low = 0;
    string s;
    cin >> s;
    // 97-122 lowercase & 65-90 uppercase
    for (int i=0; i<s.size(); i++) {
        if(64 < int(s[i]) && int(s[i]) < 91)
            up++;
        else
            low++;
    }

    if(low>=up)
        lowercase(s);
    else
        uppercase(s);
        
    return 0;
}
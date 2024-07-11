// https://codeforces.com/problemset/problem/131/A

#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cin >> word;

    bool allUpper = true, firstLowerRestUpper = true;
    
    // Check the conditions
    for(int i = 0; i < word.size(); i++) {
        if(islower(word[i])) {
            allUpper = false;
            if(i != 0) firstLowerRestUpper = false;
        } else {
            if(i == 0) firstLowerRestUpper = false;
        }
    }

    // Transform the word if any condition is met
    if(allUpper || firstLowerRestUpper) {
        for(int i = 0; i < word.size(); i++) {
            if(isupper(word[i])) {
                word[i] = tolower(word[i]);
            } else {
                word[i] = toupper(word[i]);
            }
        }
    }

    cout << word;
    return 0;
}

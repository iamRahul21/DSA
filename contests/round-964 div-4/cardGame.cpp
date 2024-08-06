#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> win(t);
    
    for(int i = 0; i < t; i++) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        vector<pair<int, int>> suneet_cards = { {a1, a2}, {a2, a1} };
        vector<pair<int, int>> slavic_cards = { {b1, b2}, {b2, b1} };
        
        int suneet_wins = 0;

        for(auto s : suneet_cards) {
            for(auto b : slavic_cards) {
                int suneet_score = 0;
                int slavic_score = 0;

                if(s.first > b.first) suneet_score++;
                else if(s.first < b.first) slavic_score++;

                if(s.second > b.second) suneet_score++;
                else if(s.second < b.second) slavic_score++;

                if(suneet_score > slavic_score) {
                    suneet_wins++;
                }
            }
        }

        win[i] = suneet_wins;
    }

    for(int i = 0; i < t; i++)
        cout << win[i] << endl;

    return 0;
}
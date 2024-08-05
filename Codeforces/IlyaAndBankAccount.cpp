// https://codeforces.com/problemset/problem/313/A

#include<iostream>
using namespace std;

int main(){
    long long n, output;
    cin >> n;
    if(n>=0){
        output = n;
    }else{
        if(n%10==0 && n>=-100){
            output = 0;
        }else{
            int last_digit, second_last_digit;
            long long output1, output2;
            last_digit = n-(n/10)*10;
            output1 = (n/100)*10 + last_digit;
            second_last_digit = n/10 - (n/100)*10;
            output2 = (n/100)*10 + second_last_digit;
            if(output1>output2)
                output = output1;
            else 
                output = output2;
        }
    }
    cout << output;
    return 0;
}
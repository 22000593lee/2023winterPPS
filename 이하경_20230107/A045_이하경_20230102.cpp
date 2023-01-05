//이하경
//백준 1157
//단어공부
//https://www.acmicpc.net/problem/1157

#include <iostream>

using namespace std;

int alphabet[26];
int cnt = 0;
int i;
string input;

int main() {
    cin >> input;
    
    for(i=0 ; i<input.size() ; i++) {
        if(input[i] < 97) alphabet[input[i]-65]++; 
        else alphabet[input[i]-97]++;
    }

    int max = 0, max_index = 0;

    for(i=0 ; i<26 ; i++) {
        if(max < alphabet[i]) {
            max = alphabet[i];
            max_index = i;
        } 
    }
    for(i=0 ; i<26 ; i++) {
        if(max == alphabet[i]) cnt++;
    }
    if(cnt > 1) cout << "?";
    else cout << (char)(max_index+65);
}

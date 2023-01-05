//이하경
//백준 5622
//다이얼
//https://www.acmicpc.net/problem/5622

#include <iostream>

using namespace std;

int total = 0;
string s;
int i;

int main() {
    cin >> s;
    for(i=0 ; i<s.size() ; i++) {
        total += ((int)s[i]-65)/3 + 3; 
        if(s[i] == 'S' ||s[i] == 'V' ||s[i] == 'Y' ||s[i] == 'Z' ) total--;
    }
    cout << total; 
}
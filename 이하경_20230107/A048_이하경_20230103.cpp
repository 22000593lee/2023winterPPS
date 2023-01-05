//이하경
//백준 1317
//그룹 단어 체커
//https://www.acmicpc.net/problem/1317

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string word;
    int count = 0;
    for (int i = 0; i < n; i++){
        bool isgroup = true; 
        cin >> word;
        word.erase(unique(word.begin(), word.end()), word.end()); 
        sort(word.begin(), word.end()); 
        for (int j=0 ; j<word.length()-1 ; j++){
            if(word[j] == word[j+1]) {
                isgroup = false; 
                break;
            }
        }
        if(isgroup){
            count++;
        }
    }
    cout << count;
}
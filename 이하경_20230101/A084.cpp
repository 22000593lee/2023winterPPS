//이하경
//백준 11656
//접미사 배열
//substr()사용

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {    
	string str;
    int i;
    cin >> str;
    int len = str.length();
 
    vector<string> vec;
    for(i=0; i<len; i++) {
        vec.push_back(str.substr(i, len));
    }        
    sort(vec.begin(), vec.end());
    for(i=0; i<len; i++)
        cout << vec[i] << "\n";
        return 0;
}

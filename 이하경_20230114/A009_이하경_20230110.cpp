#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    vector<char> temp;
    bool answer = true;
    for(int i=0 ; i<s.size() ; i++) {
        if(isdigit(s[i])) temp.push_back(s[i]);
    }
    if(s.size() != temp.size() || (temp.size() != 4 && temp.size() != 6)) 
        answer = false;
    return answer;
}
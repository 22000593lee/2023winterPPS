#include <string>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_n = 0;
    int y_n = 0;
    
    for(int i=0 ; i<s.size() ; i++) {
        if(s[i] == 'p' || s[i] == 'P') p_n++;
        if(s[i] == 'y' || s[i] == 'Y') y_n++;
    }
    if(p_n != y_n) answer = false;
    return answer;
}
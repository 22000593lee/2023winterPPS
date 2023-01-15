#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int i, j, k;
    bool check;
    
    for(i=0 ; i<skill_trees.size() ; i++) {
        vector<char> same;
        check = true;
        for(j=0 ; j<skill_trees[i].size() ; j++) {
            for(k=0 ; k<skill.size() ; k++) {
                if(skill_trees[i][j]==skill[k]) same.push_back(skill_trees[i][j]);
            }
        }
        for(j=0 ; j<same.size() ; j++) {
            if(skill[j] != same[j]) check = false;
        }
        if(check) answer++;
    }    
    return answer;
}

int main() {
    string skill = "BCD";
    vector<string> sk;
    sk.push_back("BACDE");
    sk.push_back("CBADF");
    sk.push_back("AECB");
    sk.push_back("BDA");
    cout << solution(skill, sk) << endl;
}


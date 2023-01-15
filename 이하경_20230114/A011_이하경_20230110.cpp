#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(pair<float, int>a, pair<float, int>b) {
    if (a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int x, reach;
    vector<pair<float, int>> f;
    int i, j;
    //N개의 stage의 실패율 구하기
    for(i=1 ; i<=N ; i++) {
        x = 0;
        reach = 0;
        //i번째 스테이지를 도전한 사람과 도전중인 사람의 수 구하기
        for(j=0 ; j<stages.size() ; j++) {
            if(stages[j]>=i) {
                if(stages[j] == i) {
                    x++;
                    reach++;
                }
                else reach++;
            }
        }
        cout << "x = " << x << " reach = " << reach << endl;
        if(x==0) f.push_back({0, i});
        else f.push_back({(float)x/reach, i});
    }
    for(i=0 ; i<N ; i++) {
        cout << "f = " << f[i].first << "\nindex = " << f[i].second << endl;
    }   
    sort(f.begin(), f.end(), compare);
    for(i=0 ; i<N ; i++) {
        answer.push_back(f[i].second);
    }    
    return answer;
}
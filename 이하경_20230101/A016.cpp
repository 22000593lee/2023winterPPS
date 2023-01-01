//이하경
//구명보트

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {    
    sort(people.begin(), people.end());
    
    int answer = 0;
    int i = 0;
    int back;
    
    while(i < people.size()) {
        back = people.back(); 
        people.pop_back();
        if(people[i] + back <= limit){ 
            answer++; 
            i++; 
        }
        else answer++;
    }    
    return answer;
}
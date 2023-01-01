//이하경
//백준 2455
//지능형 기차

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int out, in;
    int i;
    int total = 0;
    vector<int> people;

    for(i=0 ; i<4 ; i++) {
        scanf("%d %d", &out, &in);
        total += (+in-out);
        people.push_back(total);
    }

    sort(people.begin(), people.end());
    cout << people[3] << endl;
}
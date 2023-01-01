//이하경
//백준 10814
//나이순 정렬
//stable_sort를 사용해야 함

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string> p, pair<int, string> q)
{
	return p.first < q.first;
}

int main() {    
	int n, age;
    string name;
    vector<pair<int, string> > vec;
		
	cin >> n;
	for (auto i=0; i<n; i++) {
		cin >> age >> name;
        vec.push_back(make_pair(age,name));
    }   
    stable_sort(vec.begin(), vec.end(), cmp); //stable_sort 사용하면 기존의 순서를 보장
    for (auto i=0; i<vec.size(); i++) {
    	cout << vec[i].first << " " << vec[i].second << "\n"; //endl 사용시 시간 초과, "\n"가 속도가 더 빠른듯
    } 

	return 0;
}

//이하경
//백준 3052
//나머지
//https://www.acmicpc.net/problem/3052
//unique(), sort(), erase()

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int num, i;
    vector<int> vec;
	
	for(i=0; i<10; i++) {
		cin >> num;
        vec.push_back(num%42);
	}

    sort(vec.begin(), vec.end()); //unique() 사용 전 sort()해줘야 함
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	cout << vec.size() << "\n";
}

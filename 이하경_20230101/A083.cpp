//이하경
//백준 10867
//중복 빼고 정렬하기
//unique()사용

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {    
	int n;
	vector<int> arr;

	cin >> n;
	int num, i;
	for (i=0; i<n; i++)
	{
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	for (auto a : arr)
	{
		cout << a << " ";
	}
	return 0;
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int arr[200] = {0,};
	int size = 0;
    int i;
	bool check = true;
	vector<string> v;

	cin >> size;
	v.reserve(size);

	for (i=0 ; i<size ; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
    for (auto iter = v.begin() ; iter != v.end() ; iter++) {
		arr[(int)(*iter)[0]] += 1;
	}
    for (i='a' ; i<'z'+1 ; i++) {
		if (arr[i] >= 5) {
			cout << (char)i;
			check = false;
		}
	}	
	if (check) cout << "PREDAJA";
}
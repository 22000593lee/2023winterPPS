//이하경
//백준 2693
//N번째 큰 수
//sort 사용

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	int A[10];
		
	cin >> t;
	for (int i=0; i<t; i++) {
		for (int j=0; j<10; j++) {
			cin >> A[j];
		}
		sort(A, A+10);
		cout << A[7] << endl;
	}

	return 0;
}

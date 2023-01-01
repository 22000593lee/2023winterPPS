//이하경
//백준 2953
//나는 요리사다

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
 
int main()
{
	int arr[5][4];
	int high, sum, winner;
    int i, j;
    high = 0;
	for (i=0 ; i<5 ; i++) {
		sum = 0;
		for (j=0 ; j<4 ; j++) {
			cin >> arr[i][j];
			sum += arr[i][j];
		}
		if (sum > high) {
			high = sum;
			winner = i + 1;
		}
	} 
	cout << winner << " " << high << endl; 
	return 0;
}
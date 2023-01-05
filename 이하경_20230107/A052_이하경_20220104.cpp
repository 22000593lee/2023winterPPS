//이하경
//백준 8958
//OX퀴즈
//https://www.acmicpc.net/problem/8958

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char arr[80];
	int score = 0;
	int sum = 0;
	int N, i, j; 
	cin >> N;
	for (i=0 ; i<N ; i++) {
		cin >> arr;
		for (j=0 ; j<strlen(arr) ; j++) {
			if (arr[j] == 'O') {
				score++;
				sum += score; 
            }
			if (arr[j] == 'X') {
                score = 0; 
            }
		}
		cout << sum << endl;
		sum = 0; 
		score = 0;		
	}
} 
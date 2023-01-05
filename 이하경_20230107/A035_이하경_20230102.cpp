//이하경
//백준 5355
//화성수학
//https://www.acmicpc.net/problem/5355
//getline()

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T, i, j;
    int count = 0;
    float n;
    string s;

    cin >> T;
	
	for(i=0; i<T; i++) {
		cin >> n;
        getline(cin, s); //getline()
        for(j=0; j<s.size(); j++)
            switch (s[j]) {
            case '@':
                n *= 3;
                break;
            case '#':
                n -= 7;
                break;
            case '%':
                n += 5;
                break;
            }
        printf("%.2f\n", n);
	}
}

//이하경
//백준 2475
//검증수

#include <iostream>

using namespace std;

int main() {
    int valid;
    int sum = 0;
    int i, n;
    for(i=0 ; i<5 ; i++) {
        scanf("%d", &n);
        sum += n*n;
    }
    valid = sum%10;
    cout << valid;
}
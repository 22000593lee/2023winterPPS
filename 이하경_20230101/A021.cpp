//이하경
//백준 2010
//플러그

#include <iostream>

using namespace std;

int main() {
    int N;
    int i, n;
    int total = 1;
    scanf("%d", &N);
    for(i=0 ; i<N ; i++) {
        total--;
        scanf("%d", &n);
        total += n;
    }
    cout << total << endl;
}
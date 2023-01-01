//이하경
//백준 1267
//핸드폰 요금

#include <iostream>

using namespace std;

int main() {
    int N;
    int i, n;
    int y=0;
    int m=0;

    scanf("%d", &N);

    for(i=0 ; i<N ; i++) {
        scanf("%d", &n);
        y += n/30*10+10;
        m += n/60*15+15;
    }

    if(y>m) cout << "M " << m << endl;
    else if(m>y) cout << "Y " << y << endl;
    else cout << "Y M " << y << endl;
}
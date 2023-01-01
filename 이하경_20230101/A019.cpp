//이하경
//백준 2577
//숫자의 개수

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int A, B, C;
    int i, mul;
    vector<int> result = {0,0,0,0,0,0,0,0,0,0};

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    mul = A*B*C;

    while(mul>0) {
        result[mul%10]++;
        mul = mul/10;
    }
    
    for(i=0 ; i<result.size() ; i++) {
        cout << result[i] << endl;
    }
}
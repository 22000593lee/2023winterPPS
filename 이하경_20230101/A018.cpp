//이하경
//백준 1026
//보물

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, i, n;
    vector<int> A, B;
    int c[50]={0};

    scanf("%d", &N);

    for(i=0 ; i<N ; i++) {
        scanf("%d", &n);
        A.push_back(n);
    }

    for(i=0 ; i<N ; i++) {
        scanf("%d", &n);
        B.push_back(n);
    }
    sort(A.begin(), A.end());

    int sum=0;
    for(int i=0; i<N; i++) {
        int temp=0;
        int idx=0;
        for(int j=0; j<N; j++) {
            if(temp<B[j] && c[j] == 0) {
                temp=B[j];
                idx=j;
            }
        }
        c[idx] = 1;
        sum+=A[i]*temp;
    } 
    cout<<sum;
}
//이하경
//백준 2163
//초콜릿 자르기

#include <iostream>
#include <cstring>
using namespace std;

int arr[302][302];

int chocolate(int n, int m){
    if(arr[n][m]!=-1) return arr[n][m];
    if(n==1) return arr[n][m] = m-1;
    if(m==1) return arr[n][m] = n-1;
    
    return arr[n][m] = chocolate(1, m) + chocolate(n-1, m) +1;
}

int main() {
    memset(arr, -1, sizeof(arr));
    int N, M;
    cin >> N >> M;
    cout << chocolate(N, M);
}
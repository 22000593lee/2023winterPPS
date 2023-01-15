#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(2550000);
    for (int i = 0; i < n * n; i++)cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    cout << v[n-1];
    return 0;
}
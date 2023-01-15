#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i;
    int n;
    int arr[8];
    string type; 

    for(i=0 ; i<8 ; i++)  {
        scanf("%d", &arr[i]);
    }
    
    if(is_sorted(begin(arr), end(arr))) type = "ascending";
    else if(is_sorted(begin(arr), end(arr), greater<int>())) type = "descending";
    else type = "mixed"; 

    cout << type;
}
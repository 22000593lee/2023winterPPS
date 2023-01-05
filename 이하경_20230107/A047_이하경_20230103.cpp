#include <iostream>
#include <string>

using namespace std;
 
int main() {
    string a;
    int i;

    getline(cin, a);
    
    for(i=0 ; i<a.size() ; i++) {
        cout << a[i];
        if((i+1)% 10 == 0) cout << "\n";         
    }
}
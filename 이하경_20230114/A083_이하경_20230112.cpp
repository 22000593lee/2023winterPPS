#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
 
using namespace std;
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int test;
    cin>>test;
 
    vector<int> vec;
 
    for(int i=0; i<test; i++){
        int n;
        cin>>n;
        vec.push_back(n);
    }
 
    sort(vec.begin(), vec.end());
 
    vector<int>::iterator iter;
    vector<int>::iterator end_iter;
 
    end_iter=unique(vec.begin(), vec.end());
 
    for(iter=vec.begin(); iter!=end_iter; iter++){
        cout<<*iter<<" ";
    }
    return 0;
}
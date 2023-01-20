//20230116
#include <bits/stdc++.h> 
using namespace std; 
    bool isPerfectSquare(int num) {
        int s=1,e=num;
        while(s<=e)
        {
            long long int mid=s+(e-s)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid>num)
             e=mid-1;
            else
                s=mid+1;
        }
        return false;
    }
int main() 
{ 
 int num=25;
 cout<<boolalpha;
 cout<<isPerfectSquare(num)<<endl; 
 return 0;
}
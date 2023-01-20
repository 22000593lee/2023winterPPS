//20230117
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
const lli m = 1e9 + 7;
class Solution {
public:
   lli add(lli a, lli b){
      return ( (a % m) + (b % m) ) % m;
   }
   int checkRecord(int n) {
      vector <int> p(n+1), a(n+1), l(n+1), ap(n+1), al(n+1);
      if(n == 1)return 3;
      p[0] = 1;
      p[1] = 1;
      p[2] = 3;
      a[0] = 1;
      a[1] = 1;
      a[2] = 2;
      l[0] = 1;
      l[1] = 1;
      l[2] = 3;
      ap[0] = 1;
      ap[1] = 1;
      ap[2] = 2;
      al[0] = 1;
      al[1] = 1;
      al[2] = 2;
      for(int i = 3; i <= n; i++){
         p[i] = add(add(p[i-1], a[i-1]), l[i-1]);
         l[i] = add(add(p[i-1], p[i-2]),add(a[i-1] , a[i-2]));
         a[i] = add(al[i-1], ap[i-1]);
         al[i] = add(ap[i-1], ap[i-2]);
         ap[i] = add(ap[i-1], al[i-1]);
      }
      return add(add(p[n], l[n]), a[n]);
   }
};
main(){
   Solution ob;
   cout << (ob.checkRecord(3));
}
//이하경
//백준 1431
//시리얼 번호
//s[i]-'0' => 문자열을 정수로 치환
//sort()에 사용자지정함수를 사용해서 다양하게 사용 가능

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int sum(string s)
{
        int result = 0, i;
        for(i=0 ; i<s.length() ; i++)
            if((s[i] - '0') >= 1 && (s[i] - '0') <= 9) {
                result += (s[i] - '0');
            }                         
        return result;
}
 
bool cmp(string s1, string s2)
{
        if(s1.length() != s2.length())
            return s1.length() < s2.length();
        else{
            int sum1 = sum(s1);
            int sum2 = sum(s2);
            if (sum1 != sum2) {
                return sum1 < sum2;
            }      
            else {
                return s1 < s2;
            }                         
        }
}
 
int main(void) {
        int N, i;
        cin >> N;
 
        vector<string> v(N);
        for(i=0; i<N; i++) {
            cin >> v[i];
        }            
 
        sort(v.begin(), v.end(), cmp);

        for (i=0; i<N; i++) {
            cout << v[i] << "\n";
        } 

        return 0;
}


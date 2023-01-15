#include <vector>
#include <algorithm>

using namespace std;

int i, j, N, answer;

int solution(vector<int> cookie) {
    N = cookie.size();
    cookie.insert(cookie.begin(), 0);
    vector<int> sum(N+1);
    for(i=0 ; i<N ; i++) {
        sum[i+1]=sum[i]+cookie[i+1];
    }
    for(i=1 ; i<=N-1 ; i++){
        for(j=i ; j<=N-1 ; j++){
            int t = 2*sum[j]-sum[i-1];
            int idx = lower_bound(sum.begin(), sum.end(),t) - sum.begin();
            if(idx<=N && sum[idx]==t) answer=max(sum[j]-sum[i-1], answer);
        }  
    }
    return answer;
}
//이하경
//백준 1755
//숫자놀이
//pair<,> 사용

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, M, i;
    string s;
    string nums[11] = {"zero" ,"one" ,"two" ,"three" ,"four" ,"five" ,"six" ,"seven" ,"eight" ,"nine"};
    vector<pair<string ,int>> ans;
	cin >> M >> N;
	
	for(i=M; i<=N; i++) {
		if(i>=10) { //두자리수 이상
			s = nums[i/10] + " " + nums[i%10];
			ans.push_back({s,i});
		}
		else { //한자리 수
			s = nums[i%10];
			ans.push_back({s,i});
		}
	}

	sort(ans.begin(), ans.end());

	for (i=0; i<ans.size() ; i++) {
		cout << ans[i].second << " ";
		if (i%10 == 9) { //한줄에 10개씩 출력
            cout << '\n';
        }
	}

}

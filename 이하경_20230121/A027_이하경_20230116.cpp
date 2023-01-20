//20230116
#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int i,j,idx;
    
    idx = -1;
    for(i=0; i<number.length()-k ; i++){
        char max='0';
        for(j=idx+1;j<=k+i;j++){
            if(max<number[j]){
                max = number[j];
                idx=j;
            }
        }
        answer+=max;
    }
    return answer;
}
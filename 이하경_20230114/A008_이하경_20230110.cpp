#include <iostream>
#include <vector>

using namespace std;

int main() {
    int i, j;
    int c, n;
    int score;
    vector<int> st;
    int sum = 0;
    float avg;
    int high_st = 0;
    vector<float> ratio;    

    scanf("%d", &c);

    for(i=0 ; i<c ; i++)  {
        scanf("%d", &n); 
        for(j=0 ; j<n ; j++) {
            scanf("%d", &score);
            st.push_back(score);
            sum += score;
        }
        avg = (float)sum/n;
        for(j=0 ; j<n ; j++) {
            if(st[j] > avg) high_st++;
        }
        ratio.push_back((float)high_st/n * 100);
        st.clear();        
        sum = 0;
        high_st = 0;
    }
    for(i=0 ; i<c ; i++) {
        printf("%.3f%\n", ratio[i]);
    }
}
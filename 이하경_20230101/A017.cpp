//이하경
//백준 1475
//방번호

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int count, i, input, num;
    vector<vector<int>> temp;
    bool f;
    vector<int> set = {0,1,2,3,4,5,6,7,8,6};

    scanf("%d", &input);

    temp.push_back(set);
    
    count = 0;
    while(input!=0) {
        if(count >= 2) {
            temp.push_back(set);
            count = 0;
        }
        num = input%10;
        input = input/10;
        f = true;
        if(num == 9 || num == 6) {
                num = 6;
                count++;
        }
        else {
            for(i=0 ; i<temp.size() ; i++) {            
                if(*find(temp[i].begin(), temp[i].end(), num) != num) {
                    f = false;
                    break;
                } 
                else {
                    temp[i].erase(find(temp[i].begin(), temp[i].end(), num));  
                }             
            } 
        }
        if(f==false) {
            temp.push_back(set);  
        } 
    }
    cout << temp.size() << endl;
}
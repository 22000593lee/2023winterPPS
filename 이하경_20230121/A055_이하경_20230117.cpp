//20230117
class Solution {
public:
    string removeOuterParentheses(string S) {
        int left = 0, idx = 0;
        std::stack<char> st;
        string res;
        while( idx < S.length() ){
            if( S[idx] == '(' ) st.push('(');
            else st.pop();
            if( st.empty() ){
                res += S.substr(left+1,idx-left-1);
                left = idx + 1;
            } idx++;
        } return res;
    }
};
/*
- good logic
- dont need to use stack
*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int val=0;
        string ans;
        for(int i=0;i<s.size();++i){
            char c=s[i];
            if(c=='('){
                if(val>0) ans+=c;
                val++;
            }
            else{
                val--;
                if(val>0) ans+=c;
            }
        }
        return ans;
    }
};
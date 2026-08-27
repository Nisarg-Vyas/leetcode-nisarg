/*
learnt:
- deal with conditions for parenthesis comparing (they are closing or not)
- an extra condition to avoid error (accessing which isnt declared) (see (1))
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for(int i=0;i<s.size();++i){
            if(s[i]=='{'||s[i]=='('||s[i]=='['){
                temp.push(s[i]);
            }
            else{
                if(temp.empty()) return false; //<-(1)
                if((temp.top()=='(' && s[i]==')')||
                   (temp.top()=='{' && s[i]=='}')||
                   (temp.top()=='[' && s[i]==']')){
                    temp.pop();
                }
                else{
                    return false;
                }
            }
        }
        return temp.empty();
    }
};
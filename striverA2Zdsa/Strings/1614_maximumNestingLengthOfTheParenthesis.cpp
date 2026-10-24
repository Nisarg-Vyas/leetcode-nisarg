/*
- easy if you have solved this kind of question, i.e. Problem 1021
*/

class Solution {
public:
    int maxDepth(string s) {
        int ans=0,count=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='('){
                count++;
                ans=max(count,ans);
            }
            else if(s[i]==')'){
                count--;
            }
            else{

            }
        }
        return ans;
    }
};
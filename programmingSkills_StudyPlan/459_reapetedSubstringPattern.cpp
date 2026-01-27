/*
IMP Que

learnt:
-use of string.substr(start,end)
-initialise a string
-clever logic
*/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        for(int i=n/2;i>=1;--i){
            if(n%i==0){
                int times=n/i;
                string pattern=s.substr(0,i);//use of this
                string newstr="";//initialise string
                while(times--){//clever loop
                    newstr+=pattern;
                }
                if(newstr==s) return true;
            }
        }
        return false;
    }
};
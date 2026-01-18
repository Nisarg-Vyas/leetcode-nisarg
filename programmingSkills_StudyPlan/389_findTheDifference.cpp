/*
Learnt:
Soln 1
-initialization of array
-ASCII maths
-avoid the error of "not give soln in all controlled paths"

Soln 2
-Bit manipultion
-XOR of x^x=0 and of x^0=x
 so s^t will give the remaining character and all the same ones will get 0
*/

//----------------------Soln 1-------------------------------------
class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26]={0};
        int i=0;
        while(i<t.length()){
            freq[t[i]-'a']++;
            i++;
        }
        i=0;
        while(i<s.length()){
            freq[s[i]-'a']--;
            i++;
        }
        for(i=0;i<26;++i){
            if(freq[i]==1) return char(i+'a');
        }
    return ' ';
    }
};

//----------------------Soln 2-------------------------------------
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;

        for(int i=0;i<s.length();++i){
            ans^=s[i];
        }
        for(int i=0;i<t.length();++i){
            ans^=t[i];
        }

        return ans;
    }
};
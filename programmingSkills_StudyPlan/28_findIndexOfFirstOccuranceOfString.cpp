/*
learnt:
-how to deal with edge cases
-how to optimise code

soln1: beats = 5%
soln2: beats = 100%
*/

//--------------------------------Soln1---------------------------------------
class Solution {
public:
    bool check(int x,string haystack,string needle){
        for(int i=0;i<needle.length();++i){
            if(haystack[i+x]!=needle[i]) return false;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        bool a;
        for(int i=0;i<haystack.length();++i){
            if(haystack[i]==needle[0]){
                a=check(i,haystack,needle);
            }
            if(a) return i;
        }
        return -1;
    }
};

//--------------------------------Soln2---------------------------------------
//optimised
class Solution {
public:
    int check(int x,string &haystack,string &needle){
        if(x+needle.length()>haystack.length()) return false;
        //confirms that loop doesnt access element outside bound limit

        for(int i=0;i<needle.length();++i){
            if(haystack[i+x]!=needle[i]) return false;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length()) return -1;
        //simple edge case to avoid useless coderun

        for(int i=0;i<=haystack.length()-needle.length();++i){
            if(haystack[i]==needle[0]){
                if(check(i,haystack,needle)) return i;
                //good code-writing practice
            }
        }
        return -1;

    }
};
/*
learnt:
-dealing with space in cpp
-clever while loop
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1, count=0;
        
        //loop to exclude all spaces at ending of string
        while(i>=0 && s[i]==' '){
            i--;
        }

        //checking length of last word
        while(i>=0 && s[i]!=' '){
            count++;i--;
        }

        return count;
    }
};
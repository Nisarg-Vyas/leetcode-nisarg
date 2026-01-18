/*
Learnt:
-using string.push_back('s')
-a clever loop
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i=0;

        while(i<word1.length() || i<word2.length()){
            if(i<word1.length()) result.push_back(word1[i]);
            if(i<word2.length()) result.push_back(word2[i]);
            i++;
        }

        return result;
    }
};
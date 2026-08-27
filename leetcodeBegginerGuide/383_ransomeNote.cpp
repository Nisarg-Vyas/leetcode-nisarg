/*
took help from solutions
-use of string.length()
-new way to solve these kind of question
-ASCII maths
-clever Optimization techniques
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        int freq[26] = {0};

        for (int i = 0; i < magazine.length(); i++) {
            freq[magazine[i] - 'a']++;
        }

        for (int i = 0; i < ransomNote.length(); i++) {
            freq[ransomNote[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] < 0) {
                return false;
            }
        }

        return true;
    }
};

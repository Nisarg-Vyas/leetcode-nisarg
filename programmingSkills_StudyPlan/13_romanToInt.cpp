/*
learnt:
-condition to avoid overflow/out of bound error
-dealing with numbers as string
*/

class Solution {
public:
    int returnInt(char c){
        if (c == 'I') return 1;
        else if (c == 'V') return 5;
        else if (c == 'X') return 10;
        else if (c == 'L') return 50;
        else if (c == 'C') return 100;
        else if (c == 'D') return 500;
        else if (c == 'M') return 1000;
        else return 0;
    }

    int romanToInt(string s) {
        int number = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (i + 1 < s.length() && returnInt(s[i+1]) > returnInt(s[i])){
                number -= returnInt(s[i]);
            } else {
                number += returnInt(s[i]);
            }
        }
        return number;
    }
};

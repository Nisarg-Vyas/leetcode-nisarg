/*
- Good question for Bit Manippulation type of questions
- learnt:
  - exploit the & operator's property to find number of 1
  - use >> operrator to reduce the number to check each bit
*/

class Solution {
public:
    int hammingWeight(int n) {
        int count=0;
        while(n>0){
            if(n&1) count++;
            n>>=1;
        }
        return count;
    }
};
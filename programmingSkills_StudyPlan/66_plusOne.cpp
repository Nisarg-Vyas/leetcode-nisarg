/*
Learnt:
-Crazy that how we used just if and avoided using else and still made the
 code do what bwe wanted
-use of vector.insert(start,#) and vector.begin()
-solve that one edge case that made problems
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;--i){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
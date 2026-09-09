/*
- very easy question
*/

//-------------------------------------------Soln-1-----------------------------------------------------------------------
//considering the constraints
class Solution {
public:
    int countCommas(int n) {
        return (n<1000)?0:n-999; 
    }
};
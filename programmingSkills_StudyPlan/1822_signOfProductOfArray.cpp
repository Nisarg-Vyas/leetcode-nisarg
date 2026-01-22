/*
Learnt how to avoid overflow and write optimized code
*/

class Solution {
public:
    int signFunc(int x){
        return x;
    }

    int arraySign(vector<int>& nums) {
        int product=1,negative=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0) return signFunc(0);
            if(nums[i]<0) negative++;
        }

        if(negative%2 != 0) return signFunc(-1);

        return signFunc(1);
    }
};
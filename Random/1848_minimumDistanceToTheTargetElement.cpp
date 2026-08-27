/*
- pretty easy question
- Just learnt how to write code efficiently
*/

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int right=INT_MAX,left=INT_MAX;
        
        for(int i=start;i<nums.size();++i){
            if(nums[i]==target){
                right=abs(i-start);
                break;
            }
        }
        for(int i=start;i>=0;--i){
            if(nums[i]==target){
                left=abs(i-start);
                break;
            }
        }

        return min(right,left);
    }
};
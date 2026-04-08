/*
learnt:
- Binary search
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        int ans=nums.size(); //here ans=nums.size() is mandatory as, if it would be zero
                             //then one edge case will be not taken care of
                             //which is target is greater than all elements of nums, where
                             //ans will not be updated

        while(left<=right){
            int mid=left+(right-left)/2;

            if(target<=nums[mid]){
                right=mid-1;
                ans=mid;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
};
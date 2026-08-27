/*
- One of the best question to ask for knowing if a person know binary search 
  fluently or not.
- Good Question
*/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;

        int ans1=nums.size();
        int ans2=nums.size();

        //lower
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target<=nums[mid]){
                ans1=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        start=0;
        end=nums.size()-1;
        //upper
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target<nums[mid]){
                ans2=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        if(ans1<nums.size() && nums[ans1]==target) return {ans1,ans2-1};
        return {-1,-1};
    }
};
/*
- just the extended version of Q33
- this is just the case if there is no target found, what would be the condition
*/

//-------------------------------------------Soln-1-----------------------------------------------------------------------
//brute-force
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return true;
        }
        return false;
    }
};

//-------------------------------------------Soln-2-----------------------------------------------------------------------
//optimal
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]) return true;

            //the below is the additional condition for handling duplicates
            if(nums[low]==nums[mid] && nums[mid]==nums[high]){
                low++;
                high--;
                continue;
            }
            
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else{
                if(nums[mid]<target && target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return false;
    }
};
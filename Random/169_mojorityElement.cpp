/*
- Pretty easy Question
*/

//--------------------------------Soln(1): Time-O(nlogn)---------------------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

//--------------------------------Soln(2): Time-O(n)-------------------------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,freq=0;
        for(int i=0;i<nums.size();++i){
            if(freq==0) ans=nums[i];
            if(ans==nums[i]) freq++;
            else freq--;
        }
        return ans;
    }
};
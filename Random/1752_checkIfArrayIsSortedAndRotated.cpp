/*
Learnt:
- clever logi (concept of circular array)
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int smallest=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[i]<smallest) smallest=i;
        }

        int count=0;
        for(int i=smallest;i<n;++i){
            if(nums[(i+1)%n]<nums[i%n]) count++;
        }

        if(count<=1) return true;
        else return false;
    }
};
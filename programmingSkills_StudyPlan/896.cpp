/*
First wrongly written code:
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        pair<bool,bool> p(true,true);
        int max=0,min=0; <-- min/max not needed
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i+1]<max) p.first=false;
            max=nums[i+1];
        }
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i+1]>min) p.second=false;
            min=nums[i+1];
        }
        if(p.first || p.second) return true;
        else return false;
        // you can optimize the above two lines
    }
};
*/

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        pair<bool,bool> p(true,true);
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i+1]<nums[i]) p.first=false;
            if(nums[i+1]>nums[i]) p.second=false;
        }
        return p.first || p.second;
    }
};
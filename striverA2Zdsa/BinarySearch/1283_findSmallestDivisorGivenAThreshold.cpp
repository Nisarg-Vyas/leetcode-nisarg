/*
- best question for binary search (I have solve total 96 Problems)
- Good Question
*/

class Solution {
public:
    int func(int x,int n,vector<int>& nums){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]+x-1)/x; //way to get ceil with using ceil()
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int max=0;
        for(int i=0;i<nums.size();++i){
            if(max<nums[i]) max=nums[i];
        }

        int start=1,end=max;
        //binary search
        while(start<end){
            int mid=start+(end-start)/2;
            
            if(func(mid,nums.size(),nums)>threshold) start=mid+1;
            else end=mid;
        }
        return start;
    }
};
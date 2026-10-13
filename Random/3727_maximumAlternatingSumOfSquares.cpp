/*
- easy que
- take care of certain constraints
*/

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();++i){
            if(nums[i]<0){
                nums[i]=abs(nums[i]);
            }
        }

        sort(nums.begin(),nums.end(),greater<int>());

        long long start=0,end=nums.size()-1;
        long long sum=0;
        bool val=true;

        while(start<=end){
            if(val){
                sum+=(nums[start]*nums[start]);
                start++;
                val=false;
            }
            else{
                sum-=(nums[end]*nums[end]);
                end--;
                val=true;
            }
        }

        return sum;
    }
};
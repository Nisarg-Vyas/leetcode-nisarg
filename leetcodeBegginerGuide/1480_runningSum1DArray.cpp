// we must use vector here as we will not be given n, and we need to push,
// and dynamically increase the size of it

class Solution {
public:
    vector<int> runningSum(vector<int>& nums){
        int n=nums.size();
        vector<int> runningSum(n);

        for(int i=0;i<n;++i){
            if(i==0){
                runningSum[0]=nums[0];
                continue;
            }
            runningSum[i]=runningSum[i-1]+nums[i];
        }
        return runningSum;
    }
};
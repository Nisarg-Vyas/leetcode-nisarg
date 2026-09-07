/*
- would have been really tricky if we have to do it in constant time
- ummm..... It was easy
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos(n/2);
        vector<int> neg(n/2);
        int j=0,k=0;

        for(int i=0;i<n;++i){
            if(nums[i]<0) neg[j++]=nums[i];
            else pos[k++]=nums[i];
        }
        for(int i=0;i<n;i+=2){
            nums[i]=pos[i/2];
            nums[i+1]=neg[i/2];
        }

        return nums;
    }
};
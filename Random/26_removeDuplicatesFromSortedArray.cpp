/*
learnt:
- use of function vector.erase(vector.begin()+index)
- when I use erase, the size of array becomes 1 less, so I have to also
  decrease the size of index
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();++i){
            int a=nums[i-1];
            int b=nums[i];
            if(a==b){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};
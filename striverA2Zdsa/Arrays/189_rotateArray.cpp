/*
- very good question
- has many approaches, but the optimal has the crazy logic
- completely out-of-the-box thinking
- learnt:
  - if you reverse array, then reverse two parts of it, then it gets arranged in swapped positions
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
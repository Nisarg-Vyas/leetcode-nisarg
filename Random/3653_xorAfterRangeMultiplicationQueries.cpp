/*
- I dont know why but pretty straight forward question, considering that its medium question
- learnt:
  - how to deal with vector of vectors
  - good coding practices (I have highlighted them - labled GP(Good Practice))
  - use of long long where ever needed
*/

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int size=queries.size();
        int const MOD=1e9+7;  //<--GP
        vector<long long> nums_big(nums.size()); // I had an error here:
                                                 // here nums.size()-1 will not come

        for(int i=0;i<nums.size();++i){
            nums_big[i]=nums[i];
        }

        for(int i=0;i<size;++i){
            int start=queries[i][0];     //<--GP
            int end=queries[i][1];       //<--GP
            int step=queries[i][2];      //<--GP
            int multiply=queries[i][3];  //<--GP

            for(int idx=start;idx<=end;idx+=step){
                nums_big[idx]=(nums_big[idx]*multiply)%MOD;
            }
        }

        int x=nums_big[0];
        for(int i=1;i<nums_big.size();i++){
            x^=nums_big[i];
        }

        return x;
    }
};
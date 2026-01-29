/*
learnt:
-how to traverse through 2d vector
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,curr=0;

        for(int i=0;i<accounts.size();++i){
            for(int j=0;j<accounts[i].size();++j){
                curr+=accounts[i][j];
            }
            if(curr>sum){
                sum=curr;
                curr=0;
            }
            else{
                curr=0;
            }
        }

        return sum;
    }
};
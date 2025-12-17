// learnt how to use and access the elements of matrix made by vectors,
// i.e., nested vector

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0,sum=0;
        int n=accounts.size(); //size of row
        for(int i=0;i<n;++i){
            int m=accounts[0].size(); //size of column
            sum=0;
            for(int j=0;j<m;++j){
                sum+=accounts[i][j];
            }
            // here we wanted sum of row, but if we need sum of column,
            // just make the outer loop of j and innner loop of i
            /*
            example:
            for(int j=0;j<n;++j){
                for(int i=0;i<0;++i){
                    matrix[i][j];
                }
            }
            */
            if(sum>wealth) wealth=sum;
        }
        return wealth;
    }
};
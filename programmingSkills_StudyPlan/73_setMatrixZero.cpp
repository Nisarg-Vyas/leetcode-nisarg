/*
learnt:
- using vector of pairs and using it in loop
- first store the position of zeros in the loop, then make the matrix and rows zero
*/

class Solution {
public:
    void helper(vector<vector<int>>& matrix,int r,int c){
        for(int i=0;i<matrix.size();++i){
            matrix[i][r]=0;
        }
        for(int i=0;i<matrix[0].size();++i){
            matrix[c][i]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zeros;
        for(int i=0;i<matrix.size();++i){
            for(int j=0;j<matrix[0].size();++j){
                if(matrix[i][j]==0) zeros.push_back({i,j});
            }
        }
        for(int i=0;i<zeros.size();++i){
                int r=zeros[i].first;
                int c=zeros[i].second;
                helper(matrix,c,r);
        }
    }
};
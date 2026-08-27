/*
learnt:
- using vector of pairs and using it in loop
- first store the position of zeros in the loop, then make the matrix and rows zero
*/

//------------------------------------Soln 1---------------------------------------------------------------
//better soln

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

//------------------------------------Soln 1---------------------------------------------------------------
//best soln
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix[0].size();
        int c=matrix.size();
        bool rowOneZero=false;
        bool columnOneZero=false;
        
        for(int j=0;j<r;++j){
            if(matrix[0][j]==0) rowOneZero=true;
        }
        for(int i=0;i<c;++i){
            if(matrix[i][0]==0) columnOneZero=true;
        }
        for(int i=1;i<c;++i){
            for(int j=1;j<r;++j){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<c;++i){
            for(int j=1;j<r;++j){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(rowOneZero){
            for(int j=0;j<r;++j){
                matrix[0][j]=0;
            }
        }
        if(columnOneZero){
            for(int i=0;i<c;++i){
                matrix[i][0]=0;
            }
        }

    }
};
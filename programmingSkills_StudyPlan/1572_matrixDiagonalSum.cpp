/*
learnt:
- accessing matrix
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=mat.size();
        int sum=0;
        if(mat.size()%2==0){
            for(int i=0;i<s;++i){
                sum+=mat[i][i];
            }
            for(int i=0;i<s;++i){
                sum+=mat[i][s-i-1];
            }
        }
        else{
            for(int i=0;i<s;++i){
                sum+=mat[i][i];
            }
            for(int i=0;i<s;++i){
                sum+=mat[i][s-i-1];
            }
            sum-=mat[s/2][s/2];
        }
        return sum;
    }
};
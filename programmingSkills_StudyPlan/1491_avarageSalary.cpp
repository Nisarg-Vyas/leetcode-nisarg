/*
learnt:
-using typecasting int to double
*/

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int sum=0;
        for(int i=1;i<salary.size()-1;++i){
            sum+=salary[i];
        }
        int n=salary.size()-2;
        double ans=(double)sum/n;
        return ans;
    }
};
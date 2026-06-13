/*
- Marked as easy but quite tricky question
- Good brain excercise : code muscle
- learnt:
  - clever logic
  - simple bruteforce approach
*/

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();
        int ans=INT_MAX;

        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                int a=landStartTime[i];
                int b=landDuration[i];
                int c=waterStartTime[j];
                int d=waterDuration[j];

                ans=min(ans,max(a+b,c)+d);
            }
        }

        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                int c=landStartTime[j];
                int d=landDuration[j];
                int a=waterStartTime[i];
                int b=waterDuration[i];

                ans=min(ans,max(a+b,c)+d);
            }
        }

        return ans;
    }
};
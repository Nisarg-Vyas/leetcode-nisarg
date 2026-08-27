/*
learnt:
- good way to avoid division by 0
- JEE
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& a) {
        int n=a.size();
        
        int x0=a[0][0]; int x1=a[1][0];
        int y0=a[0][1]; int y1=a[1][1];

        for(int i=0;i<n;++i){
            int x=a[i][0]; int y=a[i][1];

            if((x-x0)*(y1-y0)!=(y-y0)*(x1-x0)) return 0;
        }

        return 1;
    }
};
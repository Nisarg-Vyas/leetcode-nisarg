/*
- good practical question for Binary Sort
*/

class Solution {
public:
    int func(vector<int>& piles,int mid){
        // int ans=0;
        int sum=0;
        for(int i=0;i<piles.size();i++){
            // if(piles[i]%mid==0) ans=piles[i]/mid;
            // else ans=piles[i]/mid+1;
            // sum+=ans;
            // ans=0;
            //instead:
            sum+=(piles[i]+mid-1)/mid;
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max=0;
        for(int i=0;i<n;++i){
            if(piles[i]>max) max=piles[i];
        }
        int start=1,end=max;

        while(start<end){
            int mid=start+(end-start)/2;

            if (func(piles,mid)<=h) end=mid;
            else start=mid+1;
        }
        return start;
    }
};
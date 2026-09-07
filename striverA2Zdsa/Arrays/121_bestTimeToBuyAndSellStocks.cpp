/*
- Once you get the way to think, this question is really simple
- Good Question
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxProfit=-1;

        for(int i=0;i<prices.size();++i){
            maxProfit=max(maxProfit,prices[i]-minPrice);
            minPrice=min(minPrice,prices[i]);
        }
        
        if(maxProfit) return maxProfit;
        else return 0;
    }
};
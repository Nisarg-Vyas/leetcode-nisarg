/*
- Part 2 of 3740
- Took Help from GPT
- Logic was to use map
- But GPT helped me by using map of int with vector of int 
  (I was goint to use map of int and int)
- I still find it difficult to code using map
*/

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;

        for(int i=0;i<nums.size();++i){
            mp[nums[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto i=mp.begin();i!=mp.end();++i){
            vector<int> temp=i->second;
            if(temp.size()<3) continue;
            for(int i=0;i<temp.size()-2;++i){
                int dist=2*(temp[i+2]-temp[i]);
                ans=min(ans,dist);
            }
        }
        if(ans==INT_MAX) return -1;
        else return ans;
        // (ans==INT_MAX) ? return -1 : return ans;
        // the above line is invalid C++ syntax : 
        // The ternary operator (? :) cannot be used with return like this.
    }
};
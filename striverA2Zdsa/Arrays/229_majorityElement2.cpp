/*
- same logic as for majority element 1 : Moore's Algo
- but this time it needs double the variables and some edge case precautions
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0,cnt2=0;
        int el1=INT_MIN, el2=INT_MIN;

        for(int i=0;i<n;++i){
            if(cnt1==0 && el2!=nums[i]){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0 && el1!=nums[i]){
                cnt2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--;cnt2--;
            }
        }
        
        cnt1=0,cnt2=0;
        for(int i=0;i<n;++i){
            if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;
        }
        
        int min=n/3+1;
        vector<int> ans;
        if(cnt1>=min) ans.push_back(el1);
        if(cnt2>=min) ans.push_back(el2);
        return ans;
    }
};
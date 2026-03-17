/*
good question
learn:
- using vector
- using push_back()
- using pop_back()
- using empty()
*/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int> curr_5,curr_10;
        int n=bills.size();
        for(int i=0;i<n;++i){
            if(bills[i]==5){
                curr_5.push_back(5);
            }
            else if(bills[i]==10){
                if(curr_5.empty()) return false;
                else{
                    curr_10.push_back(10);
                    curr_5.pop_back();
                }
            }
            else{
                if(!((!curr_10.empty() && !curr_5.empty()) || (curr_5.size()>=3))) return false;
                else{
                    if(!curr_10.empty()){
                        curr_10.pop_back();
                        curr_5.pop_back();
                    }
                    else{
                        curr_5.pop_back();
                        curr_5.pop_back();
                        curr_5.pop_back();
                    }
                }
            }
        }
        return true;
    }
};
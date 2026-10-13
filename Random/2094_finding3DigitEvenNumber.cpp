/*
- good que
- seems easy, but is tricky
*/

//-------------------------------------------Soln-1-----------------------------------------------------------------------
//Brute-force : O(n^3) time complexity
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> st;
        int n=digits.size();

        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                for(int k=0;k<n;++k){
                    if((i==j)||(j==k)||(k==i)) continue;

                    int temp=100*digits[i] + 10*digits[j] + digits[k];

                    if(temp>=100 && temp%2==0) st.insert(temp);
                }
            }
        }

        //i didnt knew how to use this, to input all the values of unordered set into vector
        vector<int> ans(begin(st),end(st));
        sort(begin(ans),end(ans));
        return ans;
    }
};
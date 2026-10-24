/*
- mathematical
- sieve of erathosthenes
- very clever logic and imp loops
- time complexity very complex to compute : O(nlog(log(n)))
*/

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> v(n,true);
        if(n<=2) return 0;
        v[0]=v[1]=false;
        int count=0;

        for(int i=2;i*i<n;++i){
            if(v[i]){
                for(int j=i*i;j<n;j+=i){
                    v[j]=false;
                }
            }
        }
        for(int i=0;i<n;++i){
            if(v[i]) count++;
        }
        return count;
    }
};
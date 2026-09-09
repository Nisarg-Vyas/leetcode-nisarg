/*
- same que as 3870, just the contraints are larger
*/

//-------------------------------------------Soln-1-----------------------------------------------------------------------
//considering the constraints (specific soln)
//Time Complexity : O(1)
class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        if(n>=1000) ans+=n-999;
        if(n>=1000000) ans+=n-999999;
        if(n>=1000000000) ans+=n-999999999;
        if(n>=1000000000000) ans+=n-999999999999;
        if(n>=1000000000000000) ans+=n-999999999999999;
        return ans;
    }
};

//-------------------------------------------Soln-2-----------------------------------------------------------------------
//general solution
//Time Complexity : O(log n)
class Solution {
public:
    long long countCommas(long long n) {
        long long ans=0;
        long long x=1000;
        while(x<=n){
            ans+=n-x+1;
            x*=1000;
        }
        return ans;
    }
};
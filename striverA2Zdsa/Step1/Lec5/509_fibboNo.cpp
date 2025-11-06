/*
Author: Nisarg Vyas
Problem: 

Status:
- Brute Force: [ ]
- Optimized:   [ ]

Approach Notes:

*/

#include <iostream>
using namespace std;

// ----------------------- Brute Force -----------------------
class Solution {
public:
    long long fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;

        long long a=0,b=1,c;
        for(int i=2;i<=n;++i){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};

// ----------------------- Optimized -------------------------


int main() {
    int n;
    cin>>n;
    Solution sol;
    cout<<sol.fib(n);
    return 0;
}
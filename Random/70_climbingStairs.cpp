/*
- Really a good Question
- Basic Building Block que for DP
*/

class Solution {
public:
    int climbStairs(int n) {
        int arr[n];
        if(n==1) return 1; //this condition is necessory
        arr[0]=1;
        arr[1]=2;
        for(int i=2;i<n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n-1];
    }
};
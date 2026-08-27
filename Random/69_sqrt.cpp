/*
learnt:
- we can use division instead of i*i in its condition
  to remove overflow
- we can also use long long to avoid overflow
- long long is better than division, as division is more costlier
- other, and most optimised approach is Binary Search  
*/

//-----------------------------Soln 1----------------------------------------------------------
class Solution {
public:
    int mySqrt(int x) {
        int best = 0;
        if(x==1) return 1;
    for(int i = 1; i <= x/2; ++i){
        if(i <= x/i)
            best = i;
        else
            break;
    }
    return best;
}
};

//-----------------------------Soln 2----------------------------------------------------------
class Solution {
public:
    int mySqrt(int x) {
        int best = 0;
        if(x==1) return 1;
    for(long long i = 1; i <= x/2; ++i){
        if(i*i <= x)
            best = i;
        else
            break;
    }
    return best;
}
};

//-----------------------------Soln 3----------------------------------------------------------
class Solution {
public:
    int mySqrt(int x) {
        int right=x;
        int left=1;
        int ans=0;

        while(left<=right){
            int mid=left+(right-left)/2;
            /*
            - dont do int mid=(left+right)/2;
              as that will lead to overflow
            - instead do as mentioned
            - intuition: Start at left, then walk halfway toward right
            */

            if(mid<=x/mid){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
            /*
            - ans=mid; is only in if block and not in else block is for the reason that
              if block contains mid (bcoz mid<=x/mid) and else doesnt include mid
            */
        }
        return ans;
    }
};

/*
you can also do:

class Solution {
public:
    int mySqrt(int x) {
        int right=x;
        int left=1;
        int ans=0;

        while(left<=right){
            long long mid=left+(right-left)/2; <--- NEW

            if(mid*mid<=x){ <---NEW
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};
*/
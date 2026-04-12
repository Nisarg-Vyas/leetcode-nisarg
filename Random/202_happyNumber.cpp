/*
- Good question
- classic cycle detection problem
- also has one more optimised solution even if this has 100 beats
*/

class Solution {
public:
    int calc(int x){
        int b=0;
        while(x!=0){
            b+=(x%10)*(x%10);
            x/=10;
        }
        return b;
    }
    bool isHappy(int n) {
        set<int> visited;

        while(n!=1){
            if(visited.count(n)) return false;
            visited.insert(n);
            n=calc(n);
        }
        return true;
    }
};
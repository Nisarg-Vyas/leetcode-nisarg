//learnt here how to handle cases where numbers go out of limit of certain
//data type

//(log10(x)+1) gives you the number of digits in a number

class Solution {
public:
    int reverse(int x) {
        int xx;
        long long rev=0;
        while(x != 0){
            xx=x%10;
            rev*=10;
            rev+=xx;
            x/=10;
        }
        if (rev>INT_MAX || rev<INT_MIN) return 0;
        return rev;
}
};
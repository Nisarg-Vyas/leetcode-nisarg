//here you are reversing the integer and then checking if its same as
//original no.

//you can also use method of double pointer(not original pointer) and 
//compare numbers from right end and left end together

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long dup=0;
        int y=x;
        while(x!=0){
            dup*=10;
            dup+=x%10;
            x/=10;
        }
        if(dup==y) return true;
        else return false;
    }
};
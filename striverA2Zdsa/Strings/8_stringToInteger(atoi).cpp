/*
- good problem
- learnt how to code better
- learnt how to approach a problem as per given instructions
*/

class Solution {
public:
    int helper(char c){
        return c-'0';
        //made big switch statement prior
    }

    int myAtoi(string s) {
        long long a=0;
        bool pos=true;
        int i=0,n=s.size();

        //was handling all these conditions inside a for loop, which was not
        //a good idea as it was messing and making the code bigger than nesessary
        while(i<n && s[i]==' ') i++;

        if(i<n && (s[i]=='+' || s[i]=='-')){
            pos=(s[i]!='-');
            i++;
        }

        while(i<n && s[i]>='0' && s[i]<='9'){
            int digit=helper(s[i]);

            if(pos && a>(INT_MAX-digit)/10) return INT_MAX;
            if(!pos && a>(INT_MAX+1LL-digit)/10) return INT_MIN; //very imp line - very good logic

            a=a*10+digit;
            i++;
        }

        return pos?(int)a:(int)(-a); //this is how you return using ternary operator
    }
};
/*
- Really Interesting Question
- Took Help from gpt
- this is essentially problem to convert into another numsber system
- But here the numbser system starts from 1(A) and ends at 26(Z), which we need to shift
  to 0-25, so we subtract 1 from it  
*/

class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        while(n>0){
            n--;
            int rem=n%26;
            s+='A'+rem;
            // you could write the above two lines as:
            // s+='A'+(n%26);
            n/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
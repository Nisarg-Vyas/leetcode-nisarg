/*
learnt:
- reverse() function for string
- very clever logic to traverse through both string, a and b
- clever way to convert strings to int : using ascii
- by subtraction : string -> int
  by addition : int -> string
- very clever logic to take care of carry  
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string sum="";

        while(i>=0 || j>=0 || carry){
            int s=carry;

            if(i>=0) s+=a[i--]-'0';
            if(j>=0) s+=b[j--]-'0';
            sum.push_back((s%2)+'0');
            carry=s/2;
        }

        reverse(sum.begin(),sum.end());
        return sum;
    }
};
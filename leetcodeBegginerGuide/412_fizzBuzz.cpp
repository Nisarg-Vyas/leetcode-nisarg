/*
learnt here:
- using vector<string> to return
- returning integer as string in vector<string>
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for(int i=1;i<=n;++i){
            if(i%15==0) result.push_back("FizzBuzz");
            /*
            if you want to check if the number is divisible by a and b both,
            do modulo with LCM(a,b)
            */
            else if(i%3==0) result.push_back("Fizz");
            else if(i%5==0) result.push_back("Buzz");
            else result.push_back(to_string(i));
            /*
            here we wanted to return the integer, to do that we need
            to push it in vector<string>, which only accepts string
            as its input, so we converted i from int to string
            */
        }
        return result;
    }
};
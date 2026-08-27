/*
learnt:
-using stack in cpp:
  -stack.pop()
  -stack.push(#)
  -stack.empty() <- checks if the stack is empty or not
  -stack.top() <- returns the top element in the stack
-dealing and using vectors
-dealing with strings
-converting string to int : using stoi(#)
*/

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int ans=0;

        for(int i=0;i<operations.size();++i){
            if(operations[i]=="+"){
              int x=0;
              int temp = record.top();
              x+=temp;
              record.pop();
              x+=record.top();
              record.push(temp);
              record.push(x);
            }
            else if(operations[i]=="D"){
                int x=2;
                x*=record.top();
                record.push(x);
            }
            else if(operations[i]=="C"){
                record.pop();
            }
            else{
                record.push(stoi(operations[i]));
            }
        }
        
        while(!record.empty()){
            ans+=record.top();
            record.pop();
        }

        return ans;
    }
};
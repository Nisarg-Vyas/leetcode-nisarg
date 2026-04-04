/*
much learning
learnt:
- how to deal with vector of strings and char of each string in that vector of string
    [0]    [1]    [2]    [3]    [4]    [5]
  strs[0]   f      l      o      w      e      r
  strs[1]   f      l      o      w
  strs[2]   f      l      i      g      h      t
  
  strs[0][0]  // 'f'  — first string, first character
  strs[0][1]  // 'l'  — first string, second character
  strs[1][0]  // 'f'  — second string, first character
  strs[2][2]  // 'i'  — third string, third character
  
  strs[j][i]
  //    ^  ^
  //    |  |
  //    |  which column (character position) — your outer loop variable
  //    which row (which string) — your inner loop variable
- good que
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        for(int i=0;i<200;++i){
            for(int j=0;j<strs.size();++j){
                if(i>=strs[j].size()) return s;
                if(strs[j][i]!=strs[0][i])return s;
            }
            s.push_back(strs[0][i]);
        }
        return s;
    }
};
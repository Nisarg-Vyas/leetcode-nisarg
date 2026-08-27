/*
pretty easy question
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(int i=0;i<moves.length();++i){
            if(moves[i]=='R'){
                x++;
                continue;
            }
            else if(moves[i]=='L'){
                x--;
                continue;
            }
            else if(moves[i]=='U'){
                y++;
                continue;
            }
            else{
                y--;
                continue;
            }
        }
        
        if(x==0 && y==0) return true;
        else return false;
    }
};
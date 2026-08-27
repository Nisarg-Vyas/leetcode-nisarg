/*
- Seems easy, but suprisingly good question
- the conditions of the loops were quite tricky
- otherwise, the logic for this question was fairly simple
*/

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size(),cnt1=0,cnt2=0;
        int i=startIndex,j=startIndex;

        do{
            if(words[i]==target) break;
            i=(i+1)%n;
            cnt1++;
        } while(cnt1<n);
        do{
            if(words[j]==target) break;
            j=(j-1+n)%n;
            cnt2++;
        } while(cnt2<n);

        if(cnt1==n && cnt2==n) return -1;
        else if(cnt1==n && cnt2!=n) return cnt2;
        else if(cnt2==n && cnt1!=n) return cnt1;
        else return min(cnt1,cnt2);
    }
};

//Another Good Soln:


/*
-pretty easy question (atleast by using sorting)
*/

// class Solution {
// public:
//     bool asteroidsDestroyed(long long mass, vector<int>& a) {
//         sort(a.begin(),a.end());
//         if(a[0]>mass){
//             return false;
//         }
//         else{
//             for(int i=0;i<a.size();++i){
//                 if(a[i]>mass) return false;
//                 else{
//                     mass+=a[i];
//                 }
//             }
//             return true;
//         }
//     }
// };

class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& a) {
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();++i){
                if(a[i]>mass) return false;
                else{
                    mass+=a[i];
                }
            }
            return true;
    }
};
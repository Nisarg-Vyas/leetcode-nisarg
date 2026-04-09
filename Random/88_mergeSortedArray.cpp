/*
- really clever question
*/

//-----------------------------------Soln 1 ;Space O(n)---------------------------------------
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(m+n);
        int i=0,j=0,k=0;
        for(i=0,j=0;i<m && j<n;){
            if(nums1[i]<nums2[j]){
                temp[k++]=nums1[i++];
            }else{
                temp[k++]=nums2[j++];
            }
        }

        while(i<m){
                temp[k++]=nums1[i++];
            }
        while(j<n){
                temp[k++]=nums2[j++];
            } 
               
        for(i=0;i<n+m;++i){
            nums1[i]=temp[i];
        }
    }
};

//-----------------------------------Soln 1 ;Space O(1)---------------------------------------
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=n+m-1;

        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }else{
                nums1[k--]=nums2[j--];
            }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
    }
};
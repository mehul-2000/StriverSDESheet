class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> ans;
        
//         int i=0,j=0;
        
//         while(i<m && j<n){
//             if(nums1[i]<=nums2[j]){
//                 ans.push_back(nums1[i++]);
//             }
//             else{
//                 ans.push_back(nums2[j++]);
//             }
//         }
        
//         while(i<m){
//             ans.push_back(nums1[i++]);
//         }
//         while(j<n){
//             ans.push_back(nums2[j++]);
//         }
//         nums1 = ans;

        //Optimised Approach
        int a = m-1;
        int b = n-1;
        int i = m+n-1;
        
        while(a>=0 && b>=0){
            if(nums1[a]>nums2[b]){
                nums1[i--] = nums1[a--];
            }else{
                nums1[i--] = nums2[b--];
            }
        }
        
        while(b>=0){
            nums1[i--] = nums2[b--];
        }
    }
};
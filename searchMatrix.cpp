class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
        int m = matrix.size(),n=matrix[0].size();
        int start=0,end = m*n-1;
        
        while(start<=end){
            int mid =(start+end)/2;
            int val = matrix[mid/n][mid%n];
            if(val<target){
                start=mid+1;
            }else if(val>target){
                end = mid-1;
            }else{
                return true;
            }
        }
        return false;
    }
};
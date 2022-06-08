class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //O(1) solution
        
        int ans = nums[0],counter=1;
        
        for(int i=1;i<nums.size();i++){
            if(counter==0){
                counter++;
                ans = nums[i];
            }
            else if(nums[i]==ans){
                counter++;
            }else if(nums[i]!=ans){
                counter--;
            }
        }
        return ans;
    }
};
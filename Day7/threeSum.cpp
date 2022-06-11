class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            int target = -nums[i];
           
            int start=i+1,end = nums.size()-1;
            while(start<end){
                if(nums[start]+nums[end]==target){
                    vector<int> res={nums[i],nums[start],nums[end]};
                    ans.push_back(res);
                    while(start<end && nums[start] == res[1])
                    start++;
                    while(start<end && nums[end] == res[2])
                    end--;
                }else if(nums[start]+nums[end]<target)
                {
                    start++;
                }else{
                    end--;
                }
            }
            while(i+1<nums.size() && nums[i]==nums[i+1])i++;
            
        }
        return ans;
    }
};
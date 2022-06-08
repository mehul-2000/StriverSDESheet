class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        vector<vector<int>> res;
        if(nums.empty())return res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target2 = target - nums[i] - nums[j];
                
                int low = j+1,high = n-1;
                
                while(low<high){
                    if(nums[low]+nums[high]<target2)
                        low++;
                    else if(nums[low]+nums[high]>target2)
                        high--;
                    else{
                        vector<int> ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[low]);
                        ans.push_back(nums[high]);
                        res.push_back(ans);
                        while(low<high && nums[low]==ans[2])low++;
                        while(low<high && nums[high]==ans[3])high--;
                    }
                    
                }
                while(j+1<n && nums[j+1]==nums[j])j++;
            }
            while(i+1<n && nums[i+1]==nums[i])i++;
        }
        return res;
    }
};
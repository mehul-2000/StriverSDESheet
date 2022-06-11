class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0,cnt=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt=0;
            }else{
                while(i<n && nums[i]==1){
                    cnt++;
                    i++;
                }
                if(i<n && nums[i]==0)
                    i--;
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
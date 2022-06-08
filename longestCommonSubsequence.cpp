class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        
        for(int x:nums)s.insert(x);
        int ans=0;
        for(int x:nums){
            if(s.find(x-1)==s.end()){
                int start = x;
                int len=1;
                while(s.find(x+1)!=s.end()){
                    len++;
                    x++;
                }
               ans = max(ans,len); 
            }
         
        }
        return ans;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0,cnt[128]={};
        for(;j<s.size();j++){
            cnt[s[j]]++;
            while(cnt[s[j]]>1)cnt[s[i++]]--;
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
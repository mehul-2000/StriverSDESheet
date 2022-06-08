class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a=0,b=1,cnt1=0,cnt2=0;
        
        for(auto n:nums){
            if(n==a){
                cnt1++;
            }
            else if(n==b){
                cnt2++;
            }
            else if(cnt1==0){
                a = n;
                cnt1++;
            }else if(cnt2==0){
                b=n;
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = cnt2 = 0;
    for(auto n: nums){
        if (n==a)   cnt1++;
        else if (n==b)  cnt2++;
    }
    
    vector<int> res;
      int  n = nums.size();
        if(cnt1>(n/3))
            res.push_back(a);
        if(cnt2>(n/3))
            res.push_back(b);
        
        return res;
    }
};
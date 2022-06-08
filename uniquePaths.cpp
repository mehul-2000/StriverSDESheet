class Solution {
public:
    int uniquePaths(int m, int n) {
        long long dp[m][n];
        
        if(m==1 && n==1)
            return 1;
        else if(m==1 || n==1)
            return 1;
        dp[m-1][n-1]=0;
        dp[m-1][n-2]=1;
        dp[m-2][n-1]=1;
        for(int i=m-3;i>=0;i--)
            dp[i][n-1]=dp[i+1][n-1];
        
        for(int i=n-3;i>=0;i--)
            dp[m-1][i]=dp[m-1][i+1];
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                
                dp[i][j] = dp[i+1][j]+dp[i][j+1];
            }
        }
        return dp[0][0];
    }
};
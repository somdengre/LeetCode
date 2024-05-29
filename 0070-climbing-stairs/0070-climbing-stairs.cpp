class Solution {
public:
//     int f(int n,vector<int>&dp){
//         if(n == 0)return 1;
//         if(n == 1)return 1;
        
//         if(dp[n] != -1)return dp[n];
//         int n1 = f(n-1,dp);
//         int n2 = 0;
//         if(n>1)n2 = f(n-2,dp);
        
//         return dp[n] = n1+n2;
//     }
    int climbStairs(int n) {
        if(n == 0)return 1;
        if(n == 1)return 1;
        vector<int>dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};
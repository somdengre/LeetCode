class Solution {
public:
    int f(int n,vector<int>&dp){
        if(n == 0)return 1;
        if(n == 1)return 1;
        
        if(dp[n] != -1)return dp[n];
        int n1 = f(n-1,dp);
        int n2 = 0;
        if(n>1)n2 = f(n-2,dp);
        
        return dp[n] = n1+n2;
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
};
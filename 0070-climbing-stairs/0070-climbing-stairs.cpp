class Solution {
public:
//     int f(int n,vector<int>&dp){
//         if(n == 0 || n==1){
//             return 1;
//         }
        
//         if(dp[n] != -1)return dp[n];
//         int one = f(n-1,dp);
//         int two = f(n-2,dp);
        
//         return dp[n] = one + two;
//     }
    int climbStairs(int n) {
        vector<int>dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i = 2;i<n+1;i++){
            int one = dp[i-1];
            int two = dp[i-2];
        
            dp[i] = one + two;
        }
        return dp[n];
    }
};
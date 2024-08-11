class Solution {
public:
    int f(int i,int b,vector<int>&nums,int t,vector<vector<vector<int>>>&dp){
        if(t == 0)return 0;
        if(i == nums.size())return 0;
        if(dp[i][b][t] != -1)return dp[i][b][t];
        int profit = 0;
        if(b){
            profit = max(f(i+1,1,nums,t,dp),-nums[i] + f(i+1,0,nums,t,dp));
        }else{
            profit = max(f(i+1,0,nums,t,dp),nums[i]+f(i+1,1,nums,t-1,dp));
         }
        
        return dp[i][b][t] = profit;
    }
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int b = 0;b<=1;b++){
            for(int t = 0;t<=2;t++){
                dp[n][b][t] = 0;
            }
        }
        
        for(int i = 0;i<=n;i++){
            for(int b = 0;b<=1;b++){
                dp[i][b][0] = 0;
            }
        }
        
        for(int i = n-1;i>=0;i--){
            for(int b = 0;b<=1;b++){
                for(int t = 1;t<=2;t++){
                    int profit = 0;
                    if(b){
                        profit = max(dp[i+1][1][t] ,-nums[i] + dp[i+1][0][t]);
                    }else{
                        profit = max(dp[i+1][0][t] ,nums[i]+dp[i+1][1][t-1]);
                    }
        
                    dp[i][b][t] = profit;
                }
            }
        }
        return dp[0][1][2];
    }
};
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
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,nums,2,dp);
    }
};
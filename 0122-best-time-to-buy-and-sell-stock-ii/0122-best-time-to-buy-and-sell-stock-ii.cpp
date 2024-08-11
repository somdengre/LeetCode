class Solution {
public:
    int f(int i,vector<int>&nums,int b,vector<vector<int>>&dp){
        if(i == nums.size()){
            return 0;
        }
        if(dp[i][b] != -1)return dp[i][b];
         int profit = 0;
        if(b == 1){
            profit = max(f(i+1,nums,1,dp),-nums[i] + f(i+1,nums,0,dp));
        }else{
            profit = max(f(i+1,nums,0,dp),nums[i]+f(i+1,nums,1,dp));
        }
        
        return dp[i][b] = profit;
    }
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,nums,1,dp);
    }
};
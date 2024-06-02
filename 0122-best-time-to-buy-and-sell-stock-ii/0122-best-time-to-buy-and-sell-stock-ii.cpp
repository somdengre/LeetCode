class Solution {
public:
    int f(int i,int buy, vector<int>&nums,vector<vector<int>>&dp){
        if(i == nums.size())return 0;
        if(dp[i][buy] != -1)return dp[i][buy];
        int profit = 0;
        if(buy){
            profit = max(-nums[i] + f(i+1,0,nums,dp),0 + f(i+1,1,nums,dp));
        }else{
            profit = max(nums[i] + f(i+1,1,nums,dp),0+f(i+1,0,nums,dp));
        }
        return dp[i][buy] = profit;
    }
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return f(0,1,nums,dp);
    }
};
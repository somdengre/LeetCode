class Solution {
public:
    int f(int i,int buy,int fee,vector<int>&nums,vector<vector<int>>&dp){
        if(i == nums.size())return 0;
        if(dp[i][buy] != -1)return dp[i][buy];
        
        if(buy){
            return dp[i][buy] = max(-nums[i] + f(i+1,0,fee,nums,dp),f(i+1,1,fee,nums,dp));
        }else{
            return dp[i][buy] = max(nums[i]-fee+f(i+1,1,fee,nums,dp),f(i+1,0,fee,nums,dp));
        }
    }
    int maxProfit(vector<int>& nums, int fee) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        
        return f(0,1,fee,nums,dp);
    }
};
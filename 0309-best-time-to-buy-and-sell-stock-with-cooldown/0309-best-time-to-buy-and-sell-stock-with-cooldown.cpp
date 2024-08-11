class Solution {
public:
    int f(int i,int b,vector<int>&nums,vector<vector<int>>&dp){
        if(i >= nums.size())return 0;
        if(dp[i][b] != -1)return dp[i][b];
        
        int profit = 0;
        if(b){
            profit = max(f(i+1,1,nums,dp),-nums[i]+ f(i+1,0,nums,dp));
        }else{
            profit = max(f(i+1,0,nums,dp),nums[i] + f(i+2,1,nums,dp));
        }
        
        return dp[i][b] = profit;
        
    }
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        
        return f(0,1,nums,dp);
    }
};
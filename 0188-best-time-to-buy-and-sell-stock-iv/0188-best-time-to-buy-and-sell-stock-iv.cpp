class Solution {
public:
    int f(int i,int b,vector<int>&nums,int k,vector<vector<vector<int>>>&dp){
        if(k == 0)return 0;
        if(i == nums.size())return 0;
        if(dp[i][b][k] != -1)return dp[i][b][k];
        
        int profit = 0;
        if(b){
            profit = max(f(i+1,1,nums,k,dp), -nums[i] + f(i+1,0,nums,k,dp));
        }else{
            profit = max(f(i+1,0,nums,k,dp), nums[i] + f(i+1,1,nums,k-1,dp));
         }
        
        return dp[i][b][k] =  profit;
    } 
    int maxProfit(int k, vector<int>& nums) {
        int n = nums.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return f(0,1,nums,k,dp);
    }
};
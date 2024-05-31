class Solution {
public:
    int f(int i,int k,vector<int>&nums,vector<vector<int>>&dp){
        if(i == 0){
            if(k % nums[0] == 0){
                return k/nums[0];
            }else{
                return 1e9;
            }
        }
        
        if(dp[i][k] != -2)return dp[i][k];
        int np = f(i-1,k,nums,dp);
        int p = INT_MAX;
        if(nums[i]<=k)p = 1 + f(i,k-nums[i],nums,dp);
        
        return dp[i][k] = min(p,np);
    }
    int coinChange(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,-2));
        int ans = f(n-1,k,nums,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
};
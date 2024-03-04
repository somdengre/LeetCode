class Solution {
public:
    int f(int i,vector<int>&nums,int target,vector<vector<int>>&dp){
        if(i == 0){
            if(target%nums[i] == 0){
                return target/nums[i];
            }
            else{
                return 1e9; 
            }
        }
        if(dp[i][target] != -2)return dp[i][target];
        
        int np = f(i-1,nums,target,dp);
        int p = INT_MAX;
        if(target>=nums[i]){
            p = 1+f(i,nums,target-nums[i],dp);
        }
        return dp[i][target] = min(p,np);
    }
    int coinChange(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;
        vector<vector<int>>dp(n,vector<int>(target+1,-2));
        ans = f(n-1,nums,target,dp);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};
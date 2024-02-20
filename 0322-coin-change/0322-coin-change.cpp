class Solution {
public:
    int f(int i,int t,vector<int>nums,vector<vector<int>>&dp){
        if(i == 0){
            if(t%nums[i] == 0){
                return t/nums[i];
            }else{
                return 1e9;
            }
        }
        if(dp[i][t] != -2)return dp[i][t];
        
        int npick = f(i-1,t,nums,dp);
        int pick = INT_MAX;
        if(t>=nums[i]){
            pick = 1 + f(i,t-nums[i],nums,dp);
        }
        
        return dp[i][t] = min(pick,npick);
    }
    int coinChange(vector<int>& nums, int t) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(t+1,-2));
        int ans = f(n-1,t,nums,dp);
        if(ans>= 1e9){
            return -1;
        }
        return ans;
    }
};
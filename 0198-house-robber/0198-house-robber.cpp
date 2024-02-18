class Solution {
public:
    int f(int i,vector<int>&nums,vector<int>&dp){
        if(i == 0){
            return nums[0];
        }
        if(dp[i] != -1)return dp[i];
        int pick = nums[i];
        if(i>1){
            pick+=f(i-2,nums,dp);
        }
        int npick = f(i-1,nums,dp);
        
        return dp[i] = max(pick,npick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return f(n-1,nums,dp);
    }
};
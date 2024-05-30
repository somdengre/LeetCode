class Solution {
public:
    int f(int i,vector<int>nums,vector<int>&dp){
        if(i == 0)return nums[0];
        if(i == 1)return max(nums[0],nums[1]);
        if(dp[i] != -1)return dp[i];
        int p = nums[i] + f(i-2,nums,dp);
        int np = f(i-1,nums,dp);
        
        return dp[i] = max(p,np);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        
        return f(nums.size()-1,nums,dp);
    }
};
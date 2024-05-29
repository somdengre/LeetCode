class Solution {
public:
    int f(int i,vector<int>nums,vector<int>&dp){
        if(i == 0)return nums[0];
        if(i == 1)return max(nums[0],nums[1]);
        if(dp[i] != -1)return dp[i];
        int np = f(i-1,nums,dp);
        int p = INT_MIN;
        if(i>1){ 
            p = nums[i] + f(i-2,nums,dp);
        }
        
        return dp[i] = max(p,np);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return f(n-1,nums,dp);
    }
};
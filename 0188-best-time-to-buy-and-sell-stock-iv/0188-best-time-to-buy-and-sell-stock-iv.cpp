class Solution {
public:
    int f(int i,int buy,int cap,vector<int>&nums,vector<vector<vector<int>>>&dp){
        if(cap == 0)return 0;
        if(i == nums.size())return 0;
        if(dp[i][buy][cap] != -1)return dp[i][buy][cap];
        
        if(buy){
            return dp[i][buy][cap] = max(-nums[i] + f(i+1,0,cap,nums,dp),0+f(i+1,1,cap,nums,dp));
        }else{
            return dp[i][buy][cap] = max(nums[i] + f(i+1,1,cap-1,nums,dp),f(i+1,0,cap,nums,dp));
        }
    }
    int maxProfit(int k, vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        
        return f(0,1,k,nums,dp);
    }
};
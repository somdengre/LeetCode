class Solution {
public:
    int f(int i,int k,vector<int>&nums,vector<vector<int>>&dp){
        if(k == 0)return true;
        if(i == 0)return k == nums[0];
        
        if(dp[i][k] != -1)return dp[i][k];
        
        int np = f(i-1,k,nums,dp);
        int p = 0;
        if(nums[i] <= k )p = f(i-1,k-nums[i],nums,dp);
        
        return dp[i][k] = p|np;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            sum+=nums[i];
        }
        
        if(sum%2 != 0){
            return false;
        }
        
        sum/=2;
        
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return f(n-1,sum,nums,dp);
        
    }
};
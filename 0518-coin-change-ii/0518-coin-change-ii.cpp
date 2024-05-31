class Solution {
public:
    int f(int i,int k,vector<int>&nums,vector<vector<int>>&dp){
        if(k == 0)return 1;
        if(i == 0){
            if(k%nums[0] == 0){
                return 1;
            }else{
                return 0;
            }
        }
        
        if(dp[i][k] != -1)return dp[i][k];
        int np = f(i-1,k,nums,dp);
        int p = 0;
        if(k>=nums[i])p = f(i,k-nums[i],nums,dp);
        
        return dp[i][k] = p+np;
    }
    int change(int k, vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        
        return f(n-1,k,nums,dp);
    }
};
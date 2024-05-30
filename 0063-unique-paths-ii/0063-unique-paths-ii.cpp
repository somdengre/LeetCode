class Solution {
public:
    int f(int i,int j,vector<vector<int>>nums,vector<vector<int>>&dp){
        if(nums[i][j] == 1)return 0;
        if(i<0 || j<0)return 0;
        if(i == 0 && j == 0)return 1;
        
        if(dp[i][j] != -1)return dp[i][j];
        
        int up = 0;
        if(i>0)up = f(i-1,j,nums,dp);
        int left = 0;
        if(j>0)left = f(i,j-1,nums,dp);
        
        return dp[i][j] = up+left;
        
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return f(n-1,m-1,nums,dp);
    }
};
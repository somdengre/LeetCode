class Solution {
public:
    int f(int i,int j,vector<vector<int>>nums,vector<vector<int>>&dp){
        if(nums[i][j] == 1)return 0;
        if(i == 0 && j == 0){
            return 1;
        }
        if(i<0 || j<0)return 0;
        
        if(dp[i][j] != -1)return dp[i][j];
        int left = 0;
        if(j>0)left = f(i,j-1,nums,dp);
        int up = 0;
        if(i>0)up = f(i-1,j,nums,dp);
        return dp[i][j] = up+left;
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(m-1,n-1,nums,dp);
    }
};
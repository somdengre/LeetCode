class Solution {
public:
    int f(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp){
        if(i >= nums.size() || j>= nums[i].size())return 1e9;
        if(i == nums.size()-1)return nums[i][j];
        if(dp[i][j] != -1e9)return dp[i][j];
        
        int down = nums[i][j] + f(i+1,j,nums,dp);
        int right = nums[i][j] + f(i+1,j+1,nums,dp);
        
        return dp[i][j] = min(down,right);
    }
    int minimumTotal(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1e9));
        
        return f(0,0,nums,dp);
    }
};
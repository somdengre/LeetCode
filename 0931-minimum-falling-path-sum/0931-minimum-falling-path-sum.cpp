class Solution {
public:
    
    int f(vector<vector<int>>&nums,int i,int j,int n,vector<vector<int>>&dp){
        if(i == 0 && j < nums.size() && j >= 0)return nums[i][j];
       
        if(j<0 || j>=n)return 1e9;
         if(dp[i][j] != INT_MAX)return dp[i][j];
        int d = nums[i][j] + f(nums,i-1,j,n,dp);
        int l =  nums[i][j] + f(nums,i-1,j-1,n,dp);
        int r =  nums[i][j] + f(nums,i-1,j+1,n,dp);
        
        return dp[i][j] = min(d,min(l,r));
    }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int mini = INT_MAX;
        int n= nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MAX));
        
        for(int j = 0;j<n;j++){
            mini = min(f(nums,n-1,j,n,dp), mini);
        }
        return mini;
    }
};
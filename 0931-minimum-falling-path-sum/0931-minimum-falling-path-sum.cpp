class Solution {
public:
//     int f(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp,int n){
//         if(i == 0)return nums[0][j];
//         if(dp[i][j] != -1)return dp[i][j];
        
//         int down = INT_MAX,left = INT_MAX,right = INT_MAX;
//         if(i>0)down = nums[i][j] + f(i-1,j,nums,dp,n);
//         if(i>0 && j<n-1)right = nums[i][j] + f(i-1,j+1,nums,dp,n);
//         if(i>0 && j>0)left = nums[i][j] + f(i-1,j-1,nums,dp,n);
        
//         return dp[i][j] = min(down,min(left,right));
//     }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int n = nums.size();
        
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int j = 0;j<n;j++){
            dp[0][j] = nums[0][j];
        }
        
        for(int i  = 1;i<n;i++){
            for(int j = 0;j<n;j++){
                int down = INT_MAX,left = INT_MAX,right = INT_MAX;
                if(i>0)down = nums[i][j] + dp[i-1][j];
                if(i>0 && j<n-1)right = nums[i][j] + dp[i-1][j+1];
                if(i>0 && j>0)left = nums[i][j] + dp[i-1][j-1];
        
                dp[i][j] = min(down,min(left,right));
            }
        }
        
        int mini = INT_MAX;
        for(int j = 0;j<n;j++){
            mini = min(mini,dp[n-1][j]);
        }
        
        return mini;
    }
};
class Solution {
public:
//     int f(int i,int j,vector<vector<int>>nums,vector<vector<int>>&dp){
//         if(i == 0 && j == 0)return nums[i][j];
//         if(i<0 || j<0)return 1e9;
//         if(dp[i][j] != -1)return dp[i][j];
//         int up = 1e9;
//         if(i>0)up = nums[i][j] + f(i-1,j,nums,dp);
//         int left = 1e9;
//         if(j>0)left = nums[i][j] + f(i,j-1,nums,dp);
        
//         return dp[i][j] = min(up,left);
//     }
    int minPathSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        vector<vector<int>>dp(m,vector<int>(n,1e9));
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if( i == 0 && j == 0){
                    dp[i][j] = nums[i][j];
                    continue;
                }
                int up = 1e9;
                if(i>0)up = nums[i][j] + dp[i-1][j];
                int left = 1e9;
                if(j>0)left = nums[i][j] + dp[i][j-1];
        
                dp[i][j] = min(up,left);
            }
        }
        return dp[m-1][n-1];
    }
};
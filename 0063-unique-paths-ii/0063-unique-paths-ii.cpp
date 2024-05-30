class Solution {
public:
//     int f(int i,int j,vector<vector<int>>nums,vector<vector<int>>&dp){
//         if(nums[i][j] == 1)return 0;
//         if(i<0 || j<0)return 0;
//         if(i == 0 && j == 0)return 1;
        
//         if(dp[i][j] != -1)return dp[i][j];
        
        
        
        
//     }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        dp[0][0] = 1;
        
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == 1){
                    dp[i][j] = 0;
                    continue;
                }
                if(i == 0 && j == 0){
                    dp[i][j] = 1;
                    continue;
                }
                int up = 0;
                if(i>0)up = dp[i-1][j];
                int left = 0;
                if(j>0)left = dp[i][j-1];
        
                dp[i][j] = up+left;
            }
        }
        
        return dp[n-1][m-1];
    }
};
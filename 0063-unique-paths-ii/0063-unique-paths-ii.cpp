class Solution {
public:
//     int f(int i,int j,vector<vector<int>>nums,vector<vector<int>>&dp){
//         if(nums[i][j] == 1)return 0;
//         if(i == 0 && j == 0){
//             return 1;
//         }
//         if(i<0 || j<0)return 0;
        
//         if(dp[i][j] != -1)return dp[i][j];
//         int left = 0;
//         if(j>0)left = f(i,j-1,nums,dp);
//         int up = 0;
//         if(i>0)up = f(i-1,j,nums,dp);
//         return dp[i][j] = up+left;
        
//     }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        dp[0][0] = 1;
        // for(int p = 0;p<m;p++){
        //     for(int q = 0;q<n;q++){
        //         if(nums[p][q] == 1)dp[p][q] = 0;
        //     }
        // }
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(nums[i][j] == 1){
                    dp[i][j] = 0;
                    continue;
                }
                if(i == 0 && j == 0){
                    dp[i][j] = 1;
                    continue;
                }
               
                int left = 0;
                if(j>0)left = dp[i][j-1];
                int up = 0;
                if(i>0)up = dp[i-1][j];
                dp[i][j] = up+left;
                
            }
        }
        return dp[m-1][n-1];
    }
};
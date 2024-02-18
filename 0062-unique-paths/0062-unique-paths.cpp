class Solution {
public:
//     int f(int m, int n, vector<vector<int>>&dp){
//         if(m == 0 && n==0){
//            return 1;  
//         }
        
//         if(n <0 || m<0)return 0;
//         if(dp[m][n] != -1)return dp[m][n];
        
//         int right = f(m,n-1,dp);
//         int left = f(m-1,n,dp);
        
//         return dp[m][n] = left+right;
//     }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n,-1));
        
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i == 0 && j == 0){
                    dp[i][j] = 1;
                }else{
                    int up = 0;
                    int left = 0;
                    if(i>0){
                         up = dp[i-1][j];
                    }
                    if(j>0){
                          left = dp[i][j-1];
                    }
                    
                   
                    dp[i][j] = up+left;
                }
            }
        }
        return dp[m-1][n-1];
    }
};
class Solution {
public:
    // int mod = 1e9+7;
    int f(vector<vector<int>>&matrix,int i,int j,int n,vector<vector<int>>&dp){
        if(i == 0 && j < matrix[0].size() && j >= 0)return matrix[i][j];
       
        if(j<0 || j>=n)return 1e9;
         if(dp[i][j] != INT_MAX)return dp[i][j];
        int d = matrix[i][j] + f(matrix,i-1,j,n,dp);
        int l =  matrix[i][j] + f(matrix,i-1,j-1,n,dp);
        int r =  matrix[i][j] + f(matrix,i-1,j+1,n,dp);
        
        return dp[i][j] = min(d,min(l,r));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int mini = INT_MAX;
        int n= matrix.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,INT_MAX));
        
        for(int j = 0;j<n;j++){
            mini = min(f(matrix,n-1,j,n,dp), mini);
        }
        return mini;
    }
};
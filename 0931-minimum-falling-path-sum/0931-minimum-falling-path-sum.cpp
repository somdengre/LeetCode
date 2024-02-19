class Solution {
public:
    
//     int f(vector<vector<int>>&nums,int i,int j,int n,vector<vector<int>>&dp){
//         if(i == 0 && j < nums.size() && j >= 0)return nums[i][j];
       
//         if(j<0 || j>=n)return 1e9;
//          if(dp[i][j] != INT_MAX)return dp[i][j];
//         int d = nums[i][j] + f(nums,i-1,j,n,dp);
//         int l =  nums[i][j] + f(nums,i-1,j-1,n,dp);
//         int r =  nums[i][j] + f(nums,i-1,j+1,n,dp);
        
//         return dp[i][j] = min(d,min(l,r));
//     }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int mini = INT_MAX;
        int n= nums.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int j = 0;j<n;j++){
            dp[0][j] = nums[0][j];
        }
        
        for(int i = 1;i<n;i++){
            for(int j = 0;j<n;j++){
                int d = nums[i][j] + dp[i-1][j];
                int l = 1e9;
                int r = 1e9;
                if(j-1>=0) l =  nums[i][j] + dp[i-1][j-1];
                if(j+1<n) r =  nums[i][j] + dp[i-1][j+1];
        
                dp[i][j] = min(d,min(l,r));
            }
        }
       
        for(int i = 0;i<n;i++){
            mini = min(mini,dp[n-1][i]);
        }
        return mini;
    }
};
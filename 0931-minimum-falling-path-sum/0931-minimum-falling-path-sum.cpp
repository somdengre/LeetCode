class Solution {
public:
//     int f(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp,int n){
//         if(i<0 || j<0 || i>=n || j>=n)return 1e9;
//         if(i == 0)return nums[i][j];
        
//         if(dp[i][j] != -1)return dp[i][j];
        
//         int down = nums[i][j] + f(i-1,j,nums,dp,n);
//         int left = nums[i][j] + f(i-1,j-1,nums,dp,n);
//         int right = nums[i][j] + f(i-1,j+1,nums,dp,n);
        
//         return dp[i][j] = min(down,min(left,right));
         
//     }
    int minFallingPathSum(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans = INT_MAX;
        for(int i = 0;i<n;i++){
            dp[0][i] = nums[0][i] ;
        }
        
        for(int i = 1;i<n;i++){
            for(int  j = 0;j<n;j++){
                int down = nums[i][j] + dp[i-1][j];
                int left = 1e9;
                int right = 1e9;
                if(j-1>=0)left = nums[i][j] + dp[i-1][j-1];
                if(j+1<n)right = nums[i][j] + dp[i-1][j+1];
                
                dp[i][j] = min(down,min(left,right));
            }
        }
        for(int i = 0;i<nums[n-1].size();i++){
            ans = min(ans,dp[n-1][i]);
        }

        return ans;
    }
};
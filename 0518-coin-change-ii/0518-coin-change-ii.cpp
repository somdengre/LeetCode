class Solution {
public:
//     int f(int i,int k,vector<int>&nums,vector<vector<int>>&dp){
//         if(k == 0)return 1;
//         if(i == 0)return (k%nums[i] == 0);
        
//         if(dp[i][k] != -1)return dp[i][k];
//         int pick = 0;
//         if(k>=nums[i])pick = f(i,k-nums[i],nums,dp);
//         int npick = f(i-1,k,nums,dp);
//         return dp[i][k] = pick+npick;
//     }
    int change(int k, vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,0));
        for(int i = 0;i<n;i++)dp[i][0] = 1;
        for(int i = 0;i<=k;i++){
            if(i%nums[0] == 0)dp[0][i] = 1;
        }
        
        for(int i = 1;i<n;i++){
            for(int j = 1;j<=k;j++){
                int pick = 0;
                if(j>=nums[i])pick = dp[i][j-nums[i]];
                int npick = dp[i-1][j];
                dp[i][j] = pick+npick;
            }
        }
        return dp[n-1][k];
    }
};
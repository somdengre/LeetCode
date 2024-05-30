class Solution {
public:
//     int f(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp){
//         if(i >= nums.size() || j>= nums[i].size())return 1e9;
//         if(i == nums.size()-1)return nums[i][j];
//         if(dp[i][j] != -1e9)return dp[i][j];
        
//         int down = nums[i][j] + f(i+1,j,nums,dp);
//         int right = nums[i][j] + f(i+1,j+1,nums,dp);
        
//         return dp[i][j] = min(down,right);
//     }
    int minimumTotal(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int i = 0;i<nums[n-1].size();i++){
            dp[n-1][i] = nums[n-1][i];
        }
        
        for(int i = n-1;i>=0;i--){
            for(int j = i;j>=0;j--){
                int down = nums[i][j] + dp[i+1][j];
                int right = nums[i][j] + dp[i+1][j+1];
                dp[i][j] = min(down,right);
            }
        }
        return dp[0][0];
    }
};
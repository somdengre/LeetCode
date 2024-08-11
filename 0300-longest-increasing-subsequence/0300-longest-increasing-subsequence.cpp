class Solution {
public:
//     int f(int i,int prev_ind,vector<int>&nums,vector<vector<int>>&dp){
//         if(i == nums.size())return 0;
//         if(dp[i][prev_ind+1] != -1)return dp[i][prev_ind+1];
        
//         int len = f(i+1,prev_ind,nums,dp);
//         if(prev_ind == -1 || nums[prev_ind]<nums[i]){
//             len = max(len,1+f(i+1,i,nums,dp));
//         }
        
//         return dp[i][prev_ind+1] = len;
//     }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        
        for(int i = n-1;i>=0;i--){
            for(int prev_ind = i-1;prev_ind>=-1;prev_ind--){
                int len = dp[i+1][prev_ind+1] ;
                if(prev_ind == -1 || nums[prev_ind]<nums[i]){
                    len = max(len,1+dp[i+1][i+1]);
                }
        
                dp[i][prev_ind+1] = len;
            }
        }
        return dp[0][-1+1];
    }
};
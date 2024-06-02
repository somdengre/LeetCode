class Solution {
public:
//     int f(int i,int buy,int fee,vector<int>&nums,vector<vector<int>>&dp){
//         if(i == nums.size())return 0;
//         if(dp[i][buy] != -1)return dp[i][buy];
        
//         if(buy){
//             return dp[i][buy] = max(-nums[i] + f(i+1,0,fee,nums,dp),f(i+1,1,fee,nums,dp));
//         }else{
//             return dp[i][buy] = max(nums[i]-fee+f(i+1,1,fee,nums,dp),f(i+1,0,fee,nums,dp));
//         }
//     }
    int maxProfit(vector<int>& nums, int fee) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        
        for(int i = n-1;i>=0;i--){
            for(int buy = 0;buy<=1;buy++){
                if(buy){
                    dp[i][buy] = max(-nums[i] + dp[i+1][0],dp[i+1][1]);
                }else{
                    dp[i][buy] = max(nums[i]-fee+dp[i+1][1] ,dp[i+1][0]);
                }
            }
        }
        return dp[0][1];
    }
};
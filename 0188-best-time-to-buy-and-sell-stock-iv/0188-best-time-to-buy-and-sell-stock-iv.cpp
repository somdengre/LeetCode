class Solution {
public:
//     int f(int i,int buy,int cap,vector<int>&nums,vector<vector<vector<int>>>&dp){
//         if(cap == 0)return 0;
//         if(i == nums.size())return 0;
//         if(dp[i][buy][cap] != -1)return dp[i][buy][cap];
        
//         if(buy){
//             return dp[i][buy][cap] = max(-nums[i] + f(i+1,0,cap,nums,dp),0+f(i+1,1,cap,nums,dp));
//         }else{
//             return dp[i][buy][cap] = max(nums[i] + f(i+1,1,cap-1,nums,dp),f(i+1,0,cap,nums,dp));
//         }
//     }
    int maxProfit(int k, vector<int>& nums) {
        int n = nums.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        
        for(int i = n-1;i>=0;i--){
            for(int buy = 0;buy<=1;buy++){
                for(int cap = 1;cap<=k;cap++){
                     if(buy){
                        dp[i][buy][cap] = max(-nums[i] + dp[i+1][0][cap] ,dp[i+1][1][cap]);
                    }else{
                        dp[i][buy][cap] = max(nums[i] + dp[i+1][1][cap-1] ,dp[i+1][0][cap]);
                    }
                }
            }
        }
        return dp[0][1][k];
    }
};
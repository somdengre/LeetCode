class Solution {
public:
//     int f(int i,int b,vector<int>&nums,vector<vector<int>>&dp){
//         if(i >= nums.size())return 0;
//         if(dp[i][b] != -1)return dp[i][b];
        
//         int profit = 0;
//         if(b){
//             profit = max(f(i+1,1,nums,dp),-nums[i]+ f(i+1,0,nums,dp));
//         }else{
//             profit = max(f(i+1,0,nums,dp),nums[i] + f(i+2,1,nums,dp));
//         }
        
//         return dp[i][b] = profit;
        
//     }
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+2,vector<int>(2,0));
        
        
        for(int i = n-1;i>=0;i--){
            for(int b = 0;b<=1;b++){
                int profit = 0;
                if(b){
                    profit = max(dp[i+1][1],-nums[i]+ dp[i+1][0]);
                }else{
                    profit = max(dp[i+1][0],nums[i]+dp[i+2][1]);
                    
                }
        
                 dp[i][b] = profit;
            }
        }
        return dp[0][1];
    }
};
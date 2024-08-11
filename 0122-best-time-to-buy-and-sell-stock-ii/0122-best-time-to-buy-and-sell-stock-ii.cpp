class Solution {
public:
    
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        dp[n][0] = 0;
        dp[n][1] = 0;
        
        for(int i = n-1;i>=0;i--){
            for(int b = 0;b<=1;b++){
                int profit = 0;
                if(b == 1){
                    profit = max(dp[i+1][1] ,-nums[i] + dp[i+1][0]);
                }else{
                    profit = max(dp[i+1][0] ,nums[i]+dp[i+1][1]);
                }
        
                dp[i][b] = profit;
            }
        }
        return dp[0][1];
    }
};
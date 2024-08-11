class Solution {
public:
 
    int maxProfit(int t, vector<int>& nums) {
        int n = nums.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(t+1,0)));
        
        for(int i = n-1;i>=0;i--){
            for(int b = 0;b<=1;b++){
                for(int k = 1;k<=t;k++){
                    int profit = 0;
                    if(b){
                        profit = max(dp[i+1][1][k] , -nums[i] + dp[i+1][0][k]);
                    }else{
                        profit = max(dp[i+1][0][k] , nums[i] + dp[i+1][1][k-1]);
                    }
        
                    dp[i][b][k] =  profit;
                }
            }
        }
        return dp[0][1][t];
    }
};
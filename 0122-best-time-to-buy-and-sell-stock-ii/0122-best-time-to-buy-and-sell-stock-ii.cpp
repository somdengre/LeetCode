class Solution {
public:
    // int f(int i, int j, vector<vector<int>>& dp, vector<int>& prices){
    //     if(i==prices.size()){
    //         return 0;
    //     }
    //     if(dp[i][j]!=-1){
    //         return dp[i][j];
    //     }
    //     if(j){
    //         return dp[i][j]=max((-1)*prices[i]+f(i+1, 0, dp, prices), f(i+1, 1, dp, prices));
    //     }
    //     else{
    //         return dp[i][j]=max(prices[i]+f(i+1, 1, dp, prices), f(i+1, 0, dp, prices));
    //     }
    // }
    
        int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1, vector<int>(2, 0));
        dp[n][0]=0;
        dp[n][1]=0;
        for(int i=n-1; i>=0; i--){
            for(int j=1; j>=0; j--){
                if(j){
                    dp[i][j]=max((-1)*prices[i]+dp[i+1][0], dp[i+1][1]);
                }
                else{
                    dp[i][j]=max(prices[i]+dp[i+1][1], dp[i+1][0]);
                }
            }
        }
        return dp[0][1];
    }
};
class Solution {
public:
    // int f(int i,int j,string s,string t,vector<vector<int>>&dp){
    //     if(i == 0 || j == 0){
    //         return 0;
    //     }
    //     if(dp[i][j] != -1)return dp[i][j];
    //     if(s[i-1] == t[i-1]){
    //         return dp[i][j] =  1 + f(i-1,j-1,s,t,dp);
    //     }else{
    //         return dp[i][j] = max(f(i-1,j,s,t,dp),f(i,j-1,s,t,dp));
    //     }
    // }
    int minInsertions(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        int n = s.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        for(int i = 0;i<=n;i++){
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                if(s[i-1] == t[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1] );
                }
            }
        }
        
        return n - dp[n][n];
    }
};
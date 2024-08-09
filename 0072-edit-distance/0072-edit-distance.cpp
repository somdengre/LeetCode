class Solution {
public:
//     int f(int i,int j,string s,string t,vector<vector<int>>&dp){
//         if( i == 0)return j;
//         if(j == 0)return i;
//         if(dp[i][j] !=-1)return dp[i][j];
//         if(s[i-1] == t[j-1])return dp[i][j] = 0 + f(i-1,j-1,s,t,dp);
//         int del = 1 + f(i-1,j,s,t,dp);
//         int ins = 1 + f(i,j-1,s,t,dp);
//         int rep = 1 + f(i-1,j-1,s,t,dp);
        
//         return dp[i][j] = min(del,min(ins,rep));
//     }
    int minDistance(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i = 0;i<=n;i++)dp[i][0] = i;
        for(int j = 0;j<=m;j++)dp[0][j] = j;
        
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(s[i-1] == t[j-1])dp[i][j] = 0 + dp[i-1][j-1];
                else{
                    int del = 1 + dp[i-1][j];
                    int ins = 1 + dp[i][j-1];
                    int rep = 1 + dp[i-1][j-1];
        
                    dp[i][j] = min(del,min(ins,rep));
                }
            }
        }
        return dp[n][m];
    }
};
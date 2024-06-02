class Solution {
public:
    // bool f(int i,int j ,string s,string p,vector<vector<int>>&dp){
    //     if(i==0 && j==0)return true;
    //     if(i==0 && j>0)return false;
    //     if(i>0 && j == 0){
    //         for(int ii = 1;ii<=i;ii++){
    //             if(s[ii-1] != '*'){
    //                 return false;
    //             }
    //         }
    //         return true;
    //     }
    //     if(dp[i][j] !=-1)return dp[i][j];
    //     if(s[i-1] == p[j-1] || s[i-1] == '?'){
    //         return dp[i][j] = f(i-1,j-1,s,p,dp);
    //     }
    //     if(s[i-1] == '*'){
    //         return dp[i][j] = f(i-1,j,s,p,dp) || f(i,j-1,s,p,dp);
    //     }
    //     return false;
    // }
    bool isMatch(string p, string s) {
        int n = s.length();
        int m = p.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        dp[0][0] = true;
        for(int j = 1;j<=m;j++){
            dp[0][j] = false;
        }
        for(int i = 1;i<=n;i++){
            int fl = true;
            for(int ii = 1;ii<=i;ii++){
                if(s[ii-1] != '*'){
                    fl = false;
                    break;
                }
            }
            dp[i][0] = fl;
        }
        
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(s[i-1] == p[j-1] || s[i-1] == '?'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(s[i-1] == '*'){
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                }
                else dp[i][j] = false;
            }
        }
        return dp[n][m];
    }
};

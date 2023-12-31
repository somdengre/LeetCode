class Solution {
public:
    string shortestCommonSupersequence(string x, string y) {
        int n = x.length();
        int m = y.length();
        vector<vector<int>>dp(n+1, vector<int> (m+1,0));
        
        for(int i = 1;i<=n;i++){
            for(int j= 1;j<=m;j++){
                if(x[i-1] == y[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = 0 + max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        int i = n;
        int j=m;
        string ans = "";
        while(i>0 && j>0){
            if(x[i-1] == y[j-1]){
                ans+=x[i-1];
                i--;j--;
            }else if(dp[i-1][j] > dp[i][j-1]){
                ans+=x[i-1];
                i--;
            }else{
                ans+=y[j-1];
                j--;
            }
        }
        
        while(i>0){
            ans+=x[i-1];
            i--;
        }
        while(j>0){
            ans+=y[j-1];
            j--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};
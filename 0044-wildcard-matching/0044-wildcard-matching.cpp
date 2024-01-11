class Solution {
public:
    bool solve(int i,int j,string &s,string &t,vector<vector<int>> &dp)
    {
        if(i==0 && j==0)
            return true;
        if(i==0 && j>0)
            return false;
        if(i>0 && j==0)
        {
            for(int k=0;k<i;k++)
            {
                if(s[k]!='*')
                    return false;
            }
            return true;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i-1]==t[j-1] || s[i-1]=='?')
            return dp[i][j]=solve(i-1,j-1,s,t,dp);
        if(s[i-1]=='*')
            return dp[i][j]=solve(i,j-1,s,t,dp) | solve(i-1,j,s,t,dp);
        return dp[i][j]=false;
    }
    bool isMatch(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,t,s,dp);
    }
};
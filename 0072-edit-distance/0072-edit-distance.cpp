class Solution {
public:
    int f(int i,int j,string s,string t,vector<vector<int>>&dp){
        if(i==0)return j;
        if(j==0)return i;
        
        if(dp[i][j] != -1)return dp[i][j];
        
        if(s[i-1] == t[j-1]){
            return dp[i][j] =  f(i-1,j-1,s,t,dp);    
        }else{
            return dp[i][j] = 1+min(f(i-1,j,s,t,dp),min( f(i,j-1,s,t,dp), f(i-1,j-1,s,t,dp)));
        }
        
    }
    int minDistance(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        return f(n,m,s,t,dp);
    }
};
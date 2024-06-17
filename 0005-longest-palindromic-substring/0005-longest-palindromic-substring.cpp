class Solution {
public:
    bool solve(int i,int j,string&s,vector<vector<int>>&dp){
        if(i>=j)return 1;
        
        if(dp[i][j] != -1)return dp[i][j];
        
        if(s[i] == s[j]){
            return dp[i][j] = solve(i+1,j-1,s,dp);
        }else{
            return dp[i][j] = 0;
        }
    }
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        
        if(n<=1)return s;
        int len = -1;
        int start = 0;
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                if(solve(i,j,s,dp)){
                    if(j-i+1 > len){
                        start = i;
                        len = j-i+1;
                    }
                }
            }
        }
        
        return s.substr(start,len);
    }
};
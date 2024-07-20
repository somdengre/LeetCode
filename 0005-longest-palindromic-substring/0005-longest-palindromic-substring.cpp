class Solution {
public:
    bool f(string &s,int i,int j,vector<vector<int>>&dp){
        if(i>=j)return 1;
        if(dp[i][j] != -1)return dp[i][j];
        
        if(s[i] == s[j]){
            return dp[i][j] = f(s,i+1,j-1,dp);
        }else{
            return dp[i][j] = 0;
        }
    }
    string longestPalindrome(string s) {
        int n = s.length();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        int start = -1;
        int len = 0;
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                if(f(s,i,j,dp)){
                    if(j-i+1 > len){
                        start = i;
                        len = max(len,j-i+1);
                    }
                }
            }
        }
        
        return s.substr(start,len);
    }
};
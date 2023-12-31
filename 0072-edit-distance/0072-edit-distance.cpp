class Solution {
public:
//     int f(int i,int j,string s1,string s2,vector<vector<int>>&dp){
//         if(i==0)return j;
//         if(j==0)return i;
        
//         if(dp[i][j] != -1)return dp[i][j];
//         if(s1[i-1] == s2[j-1]){
//             return f(i-1,j-1,s1,s2,dp);
//         }
        
//         return  dp[i][j] = 1+ min(f(i-1,j,s1,s2,dp), min(f(i-1,j,s1,s2,dp), f(i-1,j-1,s1,s2,dp)));
//     }
    int minDistance(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        vector<int>prev(m+1,0),cur(m+1,0);
        
        for(int j = 0;j<=m;j++)prev[j] = j;
       
        
        for(int i = 1;i<=n;i++){
            cur[0] = i;
            for(int j = 1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                   cur[j] =  prev[j-1];
                }else{
                   cur[j] = 1+ min(prev[j] , min(cur[j-1] ,prev[j-1]));
                }
        
   
            }
            prev = cur;
        }
        return prev[m];
    }
};
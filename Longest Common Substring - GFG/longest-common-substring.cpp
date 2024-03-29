//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        // vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        // for(int i =0;i<=n;i++){
        //     dp[i][0] = 0;
        // }
        
        // for(int j = 0;j<=m;j++){
        //     dp[0][j] = 0;
        // }
        
        vector<int> prev(m+1, 0),cur(m+1,0);
        int ans = 0;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                    cur[j] = 1+prev[j-1];
                    ans = max(ans,cur[j]);
                }else{
                    cur[j] = 0;
                }
                
            }
            prev = cur;
        }
        
        // int ans = 0;
        
        // for(int i = 0;i<=n;i++){
        //     for(int j = 0;j<= m;j++){
        //         ans = max(ans, dp[i][j]);
        //     }
        // }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
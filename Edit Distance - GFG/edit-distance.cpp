//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string s1, string s2) {
        // Code here
         int n = s1.length();
        int m = s2.length();
       
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

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
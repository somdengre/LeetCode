class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<int>prev(m+1,0);
        
        for(int j = 0;j<m;j++)prev[j] = 0;
        
        for(int i = 1;i<=n;i++){
            vector<int>temp(m+1,0);
            for(int j = 1;j<=m;j++){
                if(s1[i-1] == s2[j-1]){
                    temp[j] = 1+prev[j-1];
                }else{
                    temp[j] = max(prev[j],temp[j-1]);
                }
            }
            prev = temp;
        }
        return prev[m];
    }
};
class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        string t = s;
        reverse(t.begin(),t.end());
        vector<int>prev(n+1,0);
        
        for(int i = 1;i<=n;i++){
            vector<int>temp(n+1,0);
            for(int j = 1;j<=n;j++){
                if(s[i-1] == t[j-1]){
                    temp[j] = 1 + prev[j-1];
                }else{
                    temp[j] = max(prev[j],temp[j-1]);
                }
            }
            prev = temp;
        }
        
        int maxi = prev[n];
        return n-maxi;
    }
};
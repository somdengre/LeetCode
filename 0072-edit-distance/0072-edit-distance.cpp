class Solution {
public:

    int minDistance(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<int>prev(m+1,0);
        for(int j = 0;j<=m;j++)prev[j] = j;
        
        for(int i = 1;i<=n;i++){
            vector<int>temp(m+1,0);
            temp[0] = i;
            for(int j = 1;j<=m;j++){
                
                if(s[i-1] == t[j-1])temp[j] = 0 + prev[j-1];
                else{
                    int del = 1 + prev[j];
                    int ins = 1 + temp[j-1];
                    int rep = 1 + prev[j-1];
        
                    temp[j] = min(del,min(ins,rep));
                }
            }
            prev = temp;
        }
        return prev[m];
    }
};
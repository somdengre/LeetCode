class Solution {
public:
    
    int numDistinct(string s, string t) {
        int n = s.length();
        int m = t.length();
        vector<double>prev(m+1,0);
        prev[0] = 1;
        
        for(int i = 1;i<=n;i++){
            vector<double>temp(m+1,0);
            temp[0] = 1;
            for(int j =1;j<=m;j++){
                if(s[i-1] == t[j-1]){
                    temp[j] = prev[j-1] +prev[j];
                }else{
                    temp[j] = prev[j] ;
                }
            }
            prev = temp;
        }
        return (int )prev[m];
    }
};
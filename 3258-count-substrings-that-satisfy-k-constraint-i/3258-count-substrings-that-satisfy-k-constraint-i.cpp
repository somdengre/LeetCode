class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ans = 0;
        int n = s.length();
        
        for(int i = 0;i<n;i++){
            int z = 0,o = 0;
            for(int j = i;j<n;j++){
                if(s[j] == '1')o++;
                if(s[j] == '0')z++;
                if(o<=k || z<=k)ans++;
            }
        }
        
        return ans;
    }
};
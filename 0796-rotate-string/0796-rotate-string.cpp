class Solution {
public:
    bool rotateString(string s, string t) {
        if(s.length() != t.length())return false;
        int n = s.length();
        for(int i = 0;i<n;i++){
            int p = 0;
            if(s[i] == t[0]){
                for(int j = 0;j<n;j++){
                    if(s[(i+j)%n] == t[p]){
                        p++;
                    }else{
                        break;
                    }
                }
                if(p == n){
                    return true;
                }
            }
        }
        
        return false;
    }
};
class Solution {
public:
    bool rotateString(string s1, string s2) {
        int n = s1.length();
        int t = n;
        while(t){
            char temp = s1[n-1];
            for(int i = n-1;i>0;i--){
                s1[i] = s1[i-1];
            }
            s1[0] = temp;
            if(s1 == s2)return true;
            t--;
        }
        return false;
    }
};
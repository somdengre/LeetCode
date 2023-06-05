class Solution {
public:
    int isPrefixOfWord(string s, string pref) {
        int n = s.length();
        int len = pref.length();
        int cnt = 1;
        for(int i = 0;i<n;i++){
            if(s[i] == ' '){cnt++; continue;}
            else{
                if(i == 0 || s[i-1] == ' '){
                    if(n-i >= len){
                        if(s.substr(i,len) == pref){
                            return cnt;
                        }
                    }
                }
            }
        }
        return -1;
    }
};
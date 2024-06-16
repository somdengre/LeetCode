class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = 0;
        int n  = s.length();
        
        while(i<n){
            string temp = "";
            while(i<n && s[i] == ' '){
                i++;
            }
            
            while(i<n && s[i] != ' '){
                temp+=s[i];
                i++;
            }
            
            if(temp.length() > 0){
                if(ans.length() == 0){
                    ans+=temp;
                }else{
                    ans = temp + " " + ans;
                }
            }
        }
        
        return ans;
    }
};
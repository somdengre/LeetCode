class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp = "";
        string ans = "";
        for(int i = 0;i<s.length();i++){
            if(s[i] == ' '){
                ans = temp;
                while(i<s.length() && s[i] == ' ' )i++;
                i--;
                temp = "";
            }
            else{
                temp+=s[i];
                ans = temp;
            }
            
        }
        return ans.length();
    }
};
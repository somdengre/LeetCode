class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans = "";
        int flag = 0;
        int cnt = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '(' && flag == 0 && cnt == 0){
                flag = 1;
            }else if(s[i] == ')' && flag == 1 && cnt == 0){
                flag = 0;
            } else if(s[i] == '('){
                cnt++;
                ans+=s[i];
            }else{
                cnt--;
                ans+=s[i];
            }
        }
        return ans;
    }
};
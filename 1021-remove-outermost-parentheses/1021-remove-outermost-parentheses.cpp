class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length(),i = 0;
        stack<char>st;
        string ans = "";
        while(i<n){
            if(s[i] == '(' && st.empty()){
                st.push(s[i]);
            }else if(s[i] == '('){
                ans+=s[i];
                st.push(s[i]);
            }else if(s[i] == ')'){
                st.pop();
                if(!st.empty()){
                    ans+=s[i];
                }
            }
            i++;
        }
        
        return ans;
    }
};
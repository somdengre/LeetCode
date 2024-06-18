class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char>st;
        for(int i = 0;i<n;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else{
                if(!st.empty() && (st.top() == '(' && s[i] == ')')){
                    st.pop();
                }else if(!st.empty() && (st.top() == '[' && s[i] == ']') ){
                    st.pop();
                }else if(!st.empty() && (st.top() == '{' && s[i] == '}')){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};
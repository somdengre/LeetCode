class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == "+") {
                int t = st.top();
                st.pop();
                int r = st.top();
                st.pop();
                st.push(r + t);
            } else if (s[i] == "/") {
                int t = st.top();
                st.pop();
                int r = st.top();
                st.pop();
                st.push(floor(r / t));
            } else if (s[i] == "*") {
                int t = st.top();
                st.pop();
                int r = st.top();
                st.pop();
                st.push(r * t);
            } else if (s[i] == "-") {
                int t = st.top();
                st.pop();
                int r = st.top();
                st.pop();
                st.push(r - t);
            } else {
                st.push(stoi(s[i]));
            }
        }

        return st.top();
    }
};

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;

        for(auto it:s){
            if(it=='#'){
                if(st.empty()==1){
                    continue;
                }
                st.pop();
            }
            else{
                st.push(it);
            }
        }
        string s1="";
        while(st.empty()==0){
            s1.push_back(st.top());
            st.pop();
        }
        
        for(auto it:t){
            if(it=='#'){
                if(st.empty()==1){
                    continue;
                }
                st.pop();
            }
            else{
                st.push(it);
            }
        }

        string s2="";
        while(st.empty()==0){
            s2.push_back(st.top());
            st.pop();
        }

        return s1==s2;

    }
};
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())return false;
        unordered_map<char,char>mp;
        set<char>st;
        
        for(int i = 0;i<s.length();i++){
            if(mp.find(s[i]) == mp.end() && st.find(t[i]) == st.end()){
                mp[s[i]] = t[i];
                st.insert(t[i]);
            }
        }
        string ans = "";
        for(int i = 0;i<s.length();i++){
            if(mp.find(s[i]) != mp.end()){
                ans+=mp[s[i]];
            }else if(st.find(s[i]) == st.end()){
                ans+=s[i];
            }
        }
        
        return ans == t;
    }
};
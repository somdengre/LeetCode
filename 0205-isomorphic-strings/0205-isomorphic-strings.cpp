class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n != m)return false;
        map<char,char>mp;
        int i= 0;
        set<char>st;
        
        while(i<n){
            if(mp.find(s[i]) == mp.end() && st.find(t[i]) == st.end()){
                mp[s[i]] = t[i];
                st.insert(t[i]);
            }
            i++;
        }
        string ans = "";
        for(int i = 0;i<n;i++){
            ans+=mp[s[i]];
        }
        
        return ans == t;
    }
};
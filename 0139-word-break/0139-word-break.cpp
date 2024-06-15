class Solution {
public:
    bool f(string s,set<string>&st,map<string,bool>&mp){
        if(s.length() == 0){
            return true;
        }
        
        if(mp.find(s) != mp.end()){
            return mp[s];
        }
        for(int i = 0;i<s.length();i++){
            string left = s.substr(0,i+1);
            if(st.find(left) != st.end()){
                string right = s.substr(i+1,s.length()-1);
                if(f(right,st,mp)){
                    mp[right] = true;
                    return true;
                }
            }
        }
        
        return mp[s] = false;
    }
    bool wordBreak(string s, vector<string>& dict) {
        
        set<string>st;
        for(int i = 0;i<dict.size();i++){
            st.insert(dict[i]);
        }
        map<string,bool>mp;
        return f(s,st,mp);
    }
};
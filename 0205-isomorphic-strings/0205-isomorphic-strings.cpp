class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>mp1,mp2,mp;
        
        for(int i = 0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        
        if(mp1.size() != mp2.size()){
            return false;
        }
        
        for(int i = 0;i<s.length();i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = t[i];
            }else{
                if(mp[s[i]] == t[i]){
                    continue;
                }else{
                    return false;
                }
            }
            
            
        }
        
        return true;
        
        
    }
};
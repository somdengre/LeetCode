class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        int n = s.length();
        if(s.length() != t.length())return false;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        
        for(int i = 0;i<n;i++){
            if(mp.find(t[i]) != mp.end()){
                mp[t[i]]--;
                if(mp[t[i]] == 0){
                    mp.erase(t[i]);
                }
            }else{
                return false;
            }
        }
        
        return true;
        
        
    }
};
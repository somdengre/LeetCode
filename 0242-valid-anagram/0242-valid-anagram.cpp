class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,int>mp;
        int n = s.length();
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
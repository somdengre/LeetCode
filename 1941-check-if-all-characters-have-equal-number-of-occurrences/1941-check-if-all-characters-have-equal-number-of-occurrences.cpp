class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map <char, int> mp;
        
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        int a = mp[s[0]];
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second != a){
                return false;
            }
        }
        
        return true;
            
    }
};


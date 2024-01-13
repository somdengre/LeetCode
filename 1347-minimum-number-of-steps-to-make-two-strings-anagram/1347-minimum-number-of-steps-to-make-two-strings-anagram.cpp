class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        int ans = 0;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        for(int i = 0;i<t.length();i++){
            if(mp[t[i]] > 0)mp[t[i]]--;
        }
        
        for(auto it :mp){
            ans += it.second;
        }
        
        return ans;
        
        
    }
};
class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        
        unordered_map<char,int>mp;
        
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        for(int i = 0;i<order.length();i++){
            int t = mp[order[i]];
            
            while(t){
                ans+=order[i];
                t--;
            }
            mp[order[i]] = 0;
        }
        
        for(auto it: mp){
            int t = it.second;
            
            while(t){
                ans+=it.first;
                t--;
            }
        }
        
        return ans;
    }
    
};
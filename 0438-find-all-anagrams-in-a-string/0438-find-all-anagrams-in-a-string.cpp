class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int j=0;
        map<char,int> mp,pm;
        vector<int> ans;
        int k=p.length();
        for(int i=0;i<k;i++){
            mp[p[i]]++;
            pm[s[i]]++;
        }
        if(mp==pm){
            ans.push_back(0);
        }
        
        for(int i=k;i<s.length();i++){
            pm[s[i]]++;
            pm[s[i-k]]--;
            
            if(pm[s[i-k]]==0){
                pm.erase(s[i-k]);
            }
            
            if(mp==pm){
                ans.push_back(i-k+1);
            }
        }
        
        
        return ans;
    }
};







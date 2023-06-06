class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& s, vector<vector<int>>& m) {
        map<int,int> mp;
        vector<vector<int>> ans;
        
        for(int i=0;i<s.size();i++){
                 mp[s[i][0]] += s[i][1];
        }
        
        for(int i=0;i<m.size();i++){
            
                    mp[m[i][0]] += m[i][1];
            
        }
        
        for(auto it:mp){
            ans.push_back({it.first,it.second});
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};
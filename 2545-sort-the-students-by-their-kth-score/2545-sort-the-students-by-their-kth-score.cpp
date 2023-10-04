class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<int> p;
        vector<vector<int>> ans;
        map<int,vector<int>> mp;
        
        
        for(int i = 0;i<score.size();i++){
            p.push_back(score[i][k]);
            mp[score[i][k]] = score[i]; 
        }
        
        sort(p.begin(),p.end());
        
        for(int i =0;i<p.size();i++){
            ans.push_back(mp[p[i]]);
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;

        
    }
};
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp1,mp2;
        vector<vector<int>>ans;
        for(int i = 0;i<matches.size();i++){
            mp1[matches[i][0]]++;
            mp2[matches[i][1]]++;
        }
        vector<int>t1;
        for(auto it: mp1){
            if(mp2.find(it.first) == mp2.end()){
                t1.push_back(it.first);
            }
        }
        ans.push_back(t1);
        vector<int>t2;
        for(auto it:mp2){
            if(it.second == 1){
                t2.push_back(it.first);
            }
        }
        ans.push_back(t2);
        
        return ans;
        
        
    }
};
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gs) {
        map <int, vector<int >> mp;
        vector<vector<int>> ans;
        vector<int> g;
        
        
        for(int i=0;i<gs.size();i++){
            mp[gs[i]].push_back(i);
            
        }
        
        for(auto it:mp){
            if(it.first==it.second.size()){
                ans.push_back(it.second);
            }
            else{
                int k=1;
                for(int j=k-1;j<it.second.size();j++){
                    g.push_back(it.second[j]);
                     if((j+1)%it.first==0){
                         ans.push_back(g);
                         g.clear();
                     }         
                       
            }
        }
        }
            
        return ans;
    }
    
};


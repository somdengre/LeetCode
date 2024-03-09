class Solution {
public:
    void dfs(int node,vector<int> adj[],vector<int>&vis){
      vis[node] = 1;
      for(auto it:adj[node]){
          if(vis[it] == 0){
              dfs(it,adj,vis);
          }
      }
  }
    int findCircleNum(vector<vector<int>>& nums) {
        int V = nums.size();
        vector<int>adjls[V];
        
        for(int i = 0;i<V;i++){
            for(int j = 0;j<V;j++){
                if(nums[i][j] == 1){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        
        vector<int>vis(V,0);
        int c = 0;
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                c++;
                dfs(i,adjls,vis);
                
                
            }
        }
        
        return c;
    }
};
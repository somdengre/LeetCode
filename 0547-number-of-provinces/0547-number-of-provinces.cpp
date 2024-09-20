class Solution {
public:
    void dfs(int node,vector<int>&vis,vector<vector<int>>&adj){
        vis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it])dfs(it,vis,adj);
        }
    }
    int findCircleNum(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>adj(nums.size());
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(nums[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        int cnt = 0;
        vector<int>vis(n,0);
        
        for(int i = 0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,adj);
                cnt++;
            }
        }
        
        return cnt;
    }
};
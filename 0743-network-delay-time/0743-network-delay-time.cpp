class Solution {
public:
    int networkDelayTime(vector<vector<int>>& nums, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        
        for(int i = 0;i<nums.size();i++){
            adj[nums[i][0]].push_back({nums[i][1],nums[i][2]});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,k});
        vector<int>dist(n+1,1e9);
        dist[k] = 0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int time = it.first;
            
            for(auto it: adj[node]){
                int adjNode = it.first;
                int edw = it.second;
                
                if(time+edw < dist[adjNode]){
                    dist[adjNode] = time+edw;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        
        int ans = INT_MIN;
        for(int i = 1;i<=n;i++){
            ans = max(ans,dist[i]);
        }
        
        return ans == 1e9? -1: ans;
        
    }
};
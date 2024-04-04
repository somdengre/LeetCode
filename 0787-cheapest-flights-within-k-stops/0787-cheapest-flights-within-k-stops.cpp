class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        
        for(auto it: flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        vector<int>dist(n,1e9);
        dist[src] = 0;
        
        while(!q.empty()){
            
            int stops = q.front().first;
            int node = q.front().second.first;
            int cost = q.front().second.second;
            q.pop();
            if(stops > k)continue;
            
            for(auto iter: adj[node]){
                int adjNode = iter.first;
                int edW = iter.second;
                
                if(cost + edW < dist[adjNode] && stops<=k){
                    dist[adjNode] = cost + edW;
                    q.push({stops+1, {adjNode, cost + edW}});
                }
            }
            
            
        }
        
        if(dist[dst] == 1e9)return -1;
        return dist[dst];
    }
};
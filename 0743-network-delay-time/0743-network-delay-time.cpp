class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n + 1];
        for(auto it : times){
            adj[it[0]].push_back({it[1], it[2]});
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0 , k});
        vector<int>dist(n+1 , INT_MAX);
        dist[k] = 0; 

        while(!pq.empty()){
            int dis = pq.top().first; 
            int node = pq.top().second;
            pq.pop();

           
            for(auto it : adj[node]){
                int adjNode = it.first; 
                int wt = it.second; 

                if(dis + wt < dist[adjNode]){
                    dist[adjNode] = dis + wt;
                    pq.push({dist[adjNode] , adjNode });
                }
            }  
        }
        int maxi = *max_element(dist.begin()+1 , dist.end() );

        return maxi == INT_MAX ? -1 : maxi;
    }
};
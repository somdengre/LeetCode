class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& pro, int start_node, int end_node) {
        vector<vector<pair<int,double>>>adj(n);
        for(int i = 0;i<edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],pro[i]});
            adj[edges[i][1]].push_back({edges[i][0],pro[i]});
        }
        vector<double>dis(n,0);
        dis[start_node] = 1;
        priority_queue<pair<double, int>> pq;
        pq.push({1,start_node});
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            double dist = (double)it.first;
            if(node == end_node)return dist;
            for(auto it: adj[node]){
                int adjnode = it.first;
                double wt = (double)it.second;
                if(wt*dist > dis[adjnode]){
                    dis[adjnode] = (double)wt*dist;
                    pq.push({dis[adjnode],adjnode});
                }
            }
        }
        
        return dis[end_node];
    }
};
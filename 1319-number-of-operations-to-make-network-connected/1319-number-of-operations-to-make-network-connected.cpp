class DisjointSet{
    public:
    vector<int> rank, parent;
    DisjointSet(int n){
        rank.resize(n+1, 0);
        parent.resize(n+1);
        for(int i=0; i<=n; i++) parent[i] = i;
    }
    int find(int i){
        if(parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }
    void unionByRank(int i, int j){
        int irep = find(i), jrep = find(j);
        if(irep == jrep) return ;
        if(rank[irep] < rank[jrep]) parent[irep] = jrep;
        else if(rank[jrep] < rank[irep]) parent[jrep] = irep;
        else{
           parent[jrep] = irep;
           rank[irep]++;
        }
    }
};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);
        int extra = 0; 
        for(auto it: connections){
            int u = it[0];
            int v = it[1];
           
            if(ds.find(u) == ds.find(v)){
                extra++;
            }else{
                ds.unionByRank(u,v);
            }
        }
        
        int conC = 0;
        for(int i = 0;i<n;i++){
            if(ds.parent[i] == i ){
                conC++;
            }
        }
        
        int ans = conC -1;
        
        if(extra>=ans){
            return ans;
        }
        return -1;
    }
};
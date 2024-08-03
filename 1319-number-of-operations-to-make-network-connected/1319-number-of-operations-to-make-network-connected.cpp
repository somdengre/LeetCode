class DisjointSet {
    public:
        vector<int> parent, rank;
        DisjointSet ( int n){
            parent.resize( n + 1, 1);
            rank.resize( n + 1, 0);
            for ( int i = 0; i <= n;i++) parent[i] = i;
        }
        
        int findUPar ( int node ){
            if ( node == parent[node]) return node;
            return parent[node] = findUPar(parent[node]);
        }
        
        void unionByRank ( int u , int v){
            int ulp_u = findUPar(u);
            int ulp_v = findUPar( v);
            if ( ulp_u == ulp_v) return;
            if ( rank[ulp_u] < rank[ulp_v]){
                parent[ulp_u] = ulp_v;
            } else if ( rank[ulp_v] < rank[ulp_u] ){
                parent[ulp_v] = ulp_u;
            } else {
                parent[ulp_u] = ulp_v;
                rank[ulp_v]++;
            }
        }
        
        
    
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& edges) {
         DisjointSet ds(n);
            int extra = 0;
            for(auto it: edges){
                int u = it[0];
                int v = it[1];
                
                if(ds.findUPar(u) == ds.findUPar(v)){
                    extra++;
                }else{
                    ds.unionByRank(u,v);
                }
            }
            
            int nC = 0;
            for(int i = 0;i<n;i++){
                if(ds.parent[i] == i){
                    nC++;
                }
            }
            
            int ans = nC-1;
            if(extra>=ans){
                return ans;
            }else{
                return -1;
            }
    }
};
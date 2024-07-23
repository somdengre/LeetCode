class Solution {
public:
    static vector<int> topo_sort(int k, vector<vector<int>>& conditions){
        vector<int> deg(k+1, 0);
        vector<vector<int>> adj(k+1);
        for(auto& edge: conditions){
            int v=edge[0], w=edge[1];
            adj[v].push_back(w);
            deg[w]++;
        }
        queue<int> q;
        for (int i = 1; i<=k; i++) {
            if (deg[i] == 0) 
                q.push(i);
        }

        int count=0;
        vector<int> ans;
        ans.reserve(k);
        while(!q.empty()){
            int j=q.front();
            q.pop();
            ans.push_back(j);
            count++;
            for(int k:adj[j]){
                deg[k]--;
                if (deg[k] == 0) {
                    q.push(k);
                }
            }
        }
        if(count != k) return {};
        else return ans ;

    }

    static void print(auto& c){
        cout<<"[";
        for(int x: c){
            cout<<x;
            if (x!=c.back()) cout<<", ";
        }
        cout<<"]\n";
    }

    static vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        auto order_row=topo_sort(k, rowConditions);
        auto order_col=topo_sort(k, colConditions);

    

        if (order_row.empty()|| order_col.empty())
            return {};

        vector<vector<int>> arr(k, vector<int>(k));
        vector<int> pos_i(k+1, -1), pos_j(k+1, -1);
        for(int i=0; i<k; i++){
            pos_i[order_row[i]]=i;
            pos_j[order_col[i]]=i;
        }

        for(int x=1; x<=k; x++)
            arr[pos_i[x]][pos_j[x]]=x;
        
        return arr;
    }
};

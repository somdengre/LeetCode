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
    vector<vector<string>> accountsMerge(vector<vector<string>>& details) {
        unordered_map<string,int>mapMailNode;
        int n = details.size();
        DisjointSet ds(n);
        for(int i = 0;i<n;i++){
            for(int j = 1;j<details[i].size();j++){
                string mail = details[i][j];
                if(mapMailNode.find(mail) == mapMailNode.end()){
                    mapMailNode[mail] = i;
                }else{
                    ds.unionByRank(mapMailNode[mail],i);
                }
            }
        }
        vector<string>mergedMail[n];
    for(auto it:mapMailNode){
        string mail = it.first;
        int node = ds.find(it.second);
        mergedMail[node].push_back(mail);
        
    }
    
    vector<vector<string>>ans;
    
    for(int i = 0;i<n;i++){
        if(mergedMail[i].size() == 0)continue;
        sort(mergedMail[i].begin(),mergedMail[i].end());
        vector<string>temp;
        temp.push_back(details[i][0]);
        for(auto it: mergedMail[i]){
            temp.push_back(it);
        }
        ans.push_back(temp);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
    
    
};
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int>v(n);
        for(int i = 0;i<roads.size();i++){
            v[roads[i][0]]++;
            v[roads[i][1]]++;
        }
        
        sort(v.begin(),v.end());
        long long ans = 0;
        for(int i = 0;i<n;i++){
            ans+=((i + 1ll) * v[i]);
        }
        
        return ans;


    }
};
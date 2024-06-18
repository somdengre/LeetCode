class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        int n = worker.size();
        vector<pair<int,int>>dp;
        
        for(int i = 0;i<profit.size();i++){
            dp.push_back({difficulty[i],profit[i]});
        }
        
        sort(dp.begin(),dp.end());
        sort(worker.begin(),worker.end());
        int ans = 0;
        for(int i = 0;i<n;i++){
            int keep = 0;
            int low = 0;
            while(low<dp.size() && dp[low].first <= worker[i]){
                keep = max(keep,dp[low].second);
                low++;
            }
            
            ans+=keep;
            
            
        }
        
        return ans;
    }
};
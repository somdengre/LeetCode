class Solution {
public:
    int f(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
        if(i > j)return 0;
        if(dp[i][j] != -1)return dp[i][j];
        int mini = INT_MAX;
        for(int ind = i;ind<=j;ind++){
            int cost = nums[j+1]-nums[i-1]+f(i,ind-1,nums,dp) + f(ind+1,j,nums,dp);
            mini = min(mini,cost);
        }
        
        return dp[i][j] = mini;
    }
    int minCost(int n, vector<int>& cuts) {
        int c = cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(c+2,vector<int>(c+2,-1));
        
        return f(1,c,cuts,dp);
    }
};
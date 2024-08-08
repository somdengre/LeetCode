class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int k) {
        int n = nums.size();
        int s = 0;
        for(int i = 0;i<n;i++)s+=nums[i];
        int p = s-k;
        if(p<0 || p&1)return 0;
        p = p/2;
        vector<vector<int>>dp(n,vector<int>(p+1,0));
        
        for(int i = 0;i<=p;i++){
            if(i == 0 && nums[0] == i)dp[0][i] = 2;
            else if(i == 0 || nums[0] == i)dp[0][i] = 1;
            else dp[0][i] = 0;
        }
        
        for(int i = 1;i<n;i++){
            for(int k = 0;k<=p;k++){
                int pick = 0;
                if(k >= nums[i])pick = dp[i-1][k-nums[i]];
                int npick = dp[i-1][k];
                dp[i][k] = pick+npick;
            }
        }
        
        return dp[n-1][p];
    }
};
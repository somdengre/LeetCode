class Solution {
public:

    int coinChange(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(k+1,1e9));
        for(int i = 0;i<=k;i++){
            if(i%nums[0] == 0){
                dp[0][i] = i/nums[0];
            }else{
                dp[0][i] = 1e9;
            }
        }
        
        for(int i = 1;i<n;i++){
            for(int j = 0;j<=k;j++){
                int np = dp[i-1][j];
                int p = INT_MAX;
                if(nums[i]<=j)p = 1 + dp[i][j-nums[i]];
        
                dp[i][j] = min(p,np);
            }
        }
        int ans = dp[n-1][k];
        if(ans>=1e9)return -1;
        return ans;
    }
};
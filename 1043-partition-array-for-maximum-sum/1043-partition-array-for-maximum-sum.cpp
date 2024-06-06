class Solution {
public:
//     int f(int ind,int n,vector<int>&nums,int k,vector<int>&dp){
//         if(ind == n)return 0;
//         if(dp[ind] != -1)return dp[ind];
//         int maxAns = INT_MIN;
//         int maxi = INT_MIN;
//         int len = 0;
//         for(int j = ind;j<min(n,ind+k);j++){
//             len++;
//             maxi = max(maxi,nums[j]);
//             int sum = len*maxi + f(j+1,n,nums,k,dp);
//             maxAns = max(maxAns,sum);
//         }
        
//         return dp[ind] = maxAns;
//     }
    int maxSumAfterPartitioning(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>dp(n+1,0);
        dp[n] = 0;
        
        for(int ind = n-1;ind>=0;ind--){
            int maxAns = INT_MIN;
            int maxi = INT_MIN;
            int len = 0;
            for(int j = ind;j<min(n,ind+k);j++){
                len++;
                maxi = max(maxi,nums[j]);
                int sum = len*maxi + dp[j+1];
                maxAns = max(maxAns,sum);
            }
        
            dp[ind] = maxAns;
        }
        
        return dp[0];
    }
};
class Solution {
public:
//     int f(int i,int k,vector<int>&nums,vector<vector<int>>&dp){
//         if(k == 0)return true;
//         if(i == 0)return k == nums[0];
        
//         if(dp[i][k] != -1)return dp[i][k];
        
//         int np = f(i-1,k,nums,dp);
//         int p = 0;
//         if(nums[i] <= k )p = f(i-1,k-nums[i],nums,dp);
        
//         return dp[i][k] = p|np;
//     }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            sum+=nums[i];
        }
        if(n == 1)return false;
        if(sum%2 != 0){
            return false;
        }
        
        sum/=2;
        
        vector<vector<bool>>dp(n,vector<bool>(sum+1,0));
        
        for(int i = 0;i<n;i++){
            dp[i][0] = 1;
        }
        
        dp[0][0] = 1;
        for(int i = 1;i<n;i++){
            for(int j  = 1;j<=sum;j++){
                int np = dp[i-1][j];
                int p = 0;
                if(nums[i] <= j )p = dp[i-1][j-nums[i]];
        
                dp[i][j] = p|np;
            }
        }
        
        return dp[n-1][sum];
        
    }
};
class Solution {
public:
//     int f(int i,vector<int>&nums,vector<vector<int>>&dp,int k){
        
//         if(i == 0){
//             if(k%nums[i] == 0){
//                 return k/nums[i];
//             }else{
//                 return 1e8;
//             }
//         }
        
//         if(dp[i][k] != -2)return dp[i][k];
//         int pick = INT_MAX;
//         if(nums[i]<=k)pick = 1+f(i,nums,dp,k-nums[i]);
//         int npick = f(i-1,nums,dp,k);
//         return dp[i][k] = min(pick,npick);
//     }
    int coinChange(vector<int>& nums, int k) {
        
        int n = nums.size();
        // vector<vector<int>>dp(n,vector<int>(k+1,0));
        vector<int>prev(k+1,0);
        for(int i = 0 ;i<=k;i++){
            if(i%nums[0] == 0){
                prev[i] = i/nums[0];
            }else{
                prev[i] = 1e8;
            }
        }
        
        for(int i = 1;i<n;i++){
            vector<int>temp(k+1,0);
            for(int j = 0;j<=k;j++){
                int pick = INT_MAX;
                if(nums[i]<=j)pick = 1+temp[j-nums[i]];
                int npick = prev[j];
                temp[j] = min(pick,npick);
            }
            prev = temp;
        }
        int ans = prev[k];
        if(ans>=1e8){
            return -1;
        }
        
        return ans;
    }
};
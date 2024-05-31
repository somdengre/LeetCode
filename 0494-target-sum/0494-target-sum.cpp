class Solution {
public:
//     int f(int i,int k,vector<int>&nums,vector<vector<int>>&dp){
//         if(i == 0){
//             if(k == 0 && nums[i] == 0){
//                 return 2;
//             }else if(k == nums[i]|| k == 0  ){
//                 return 1;
//             }else{
//                 return 0;
//             }
//         }
        
//         if(dp[i][k] != -1)return dp[i][k];
        
//         int np = f(i-1,k,nums,dp);
//         int p = 0;
//         if(nums[i]<=k)p = f(i-1,k-nums[i],nums,dp);
        
//         return p+np;
//     }
    int findTargetSumWays(vector<int>& nums, int d) {
        int n = nums.size();
        int s = 0;
        for(int i = 0;i<n;i++){
            s+=nums[i];
        }
        int k=s-d;
        if(k<0 || k%2 != 0)return 0;
        
        k/=2;
        vector<vector<int>>dp(n,vector<int>(k+1,-1));
        for(int i = 0;i<=k;i++){
            if(i == 0 && nums[0] == 0){
                dp[0][i] = 2;
            }else if(i == nums[0] || i == 0){
                dp[0][i] = 1;
            }else{
                dp[0][i] = 0;
            }
        }
        
        for(int i = 1;i<n;i++){
            for(int j = 0;j<=k;j++){
                 int np = dp[i-1][j];
                 int p = 0;
                 if(nums[i]<=j)p = dp[i-1][j-nums[i]];
        
                 dp[i][j] = p+np;
            }
        }
        return dp[n-1][k];
    }
};
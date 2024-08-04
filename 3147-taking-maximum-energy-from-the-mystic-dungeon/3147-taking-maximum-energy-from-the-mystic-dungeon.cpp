class Solution {
public:
    int f(int i,vector<int>&nums,vector<int>&dp,int k){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i] != -1)return dp[i];
        
        return dp[i] = nums[i] + f(i+k,nums,dp,k);
    }
    int maximumEnergy(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>dp(n,-1);
        
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            maxi =max(maxi,f(i,nums,dp,k));
        }
        
        return maxi;
    }
};
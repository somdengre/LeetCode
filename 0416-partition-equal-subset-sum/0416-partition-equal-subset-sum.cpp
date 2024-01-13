class Solution {
public:
    bool f(int i, vector<int>&nums,int s,vector<vector<int>>&dp){
        if(s == 0)return true;
        if(i == 0)return s == nums[0];
        if(dp[i][s]!= -1)return dp[i][s];
        
        bool pick = false;
        if(nums[i]<=s){
            pick = f(i-1, nums,s-nums[i],dp);
        }
        bool npick = f(i-1,nums,s,dp);
        
        return dp[i][s] = pick | npick;
        
        
    }
    bool canPartition(vector<int>& nums) {
        
        int s = 0;
        for(int i = 0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%2 != 0)return false;
        s/=2;
        vector<vector<int>>dp(nums.size(), vector<int>(s+1,-1));
        return f(nums.size()-1, nums, s,dp);
    }
};
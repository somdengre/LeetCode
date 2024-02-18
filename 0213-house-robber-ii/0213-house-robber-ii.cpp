class Solution {
public:
    int f(int i,vector<int>nums,vector<int>&dp){
        if(i == 0)return nums[0];
        
        if(dp[i] != -1)return dp[i];
        
        int pick = nums[i];
        if(i>1)pick+=f(i-2,nums,dp);
        
        int npick = f(i-1,nums,dp);
        
        return dp[i] = max(pick,npick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>v1,v2;
        if(nums.size() == 1)return nums[0];
        for(int i = 0;i<n;i++){
            if(i!=0){
                v1.push_back(nums[i]);
            }
            if(i!=n-1){
                v2.push_back(nums[i]);
            }
            
            
        }
        vector<int>dp1(v1.size()+1,-1);
        vector<int>dp2(v2.size()+1,-1);
            
            
        return max(f(n-2,v1,dp1),f(n-2,v2,dp2));
    }
};
class Solution {
public:

    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),0);
        dp[0] = nums[0];
        
        for(int i = 1;i<nums.size();i++){
            int p = nums[i];
            if(i>1)p+=dp[i-2];
            int np = dp[i-1];
        
            dp[i] = max(p,np);
        }
        
        return dp[nums.size()-1];
    }
};
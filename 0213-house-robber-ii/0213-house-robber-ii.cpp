class Solution {
public:
    int f(int i,vector<int>nums,vector<int>&dp){
        if(i == 0)return nums[0];
        if(i == 1)return max(nums[0],nums[1]);
        if(dp[i]!= -1)return dp[i];
        
        int p = nums[i] + f(i-2,nums,dp);
        int np = f(i-1,nums,dp);
        
        return dp[i] =  max(p,np);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>nums1,nums2;
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        if(n == 1)return nums[0];
        for(int i = 0;i<n;i++){
            if(i != 0){
                nums1.push_back(nums[i]);   
            }
            if(i!=n-1){
                nums2.push_back(nums[i]);
            }
        }
        
        return max(f(n-2,nums1,dp1),f(n-2,nums2,dp2));
        
        
    }
};
class Solution {
public:
    // int f(int ind,vector<int>&nums,int k,vector<int>&dp){
    //     int n = nums.size();
    //     if(ind == n)return 0;
    //     if(dp[ind]!= -1)return dp[ind];
    //     int maxans = INT_MIN;
    //     int maxi = INT_MIN;
    //     int l = 0;
    //     // int n = nums.size()-1;
    //     for(int j = ind;j < min(n,ind+k);j++){
    //         l++;
    //         maxi = max(maxi,nums[j]);
    //         int sum = l*maxi+ f(j+1,nums,k,dp);
    //         maxans = max(maxans,sum);
    //     }
    //     return dp[ind] = maxans;        
    // }
    int maxSumAfterPartitioning(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>dp(n+1,0);
        
        for(int ind = n-1;ind>=0;ind--){
             int maxans = INT_MIN;
             int maxi = INT_MIN;
             int l = 0;
        // int n = nums.size()-1;
            for(int j = ind;j < min(n,ind+k);j++){
                l++;
                maxi = max(maxi,nums[j]);
                int sum = l*maxi+ dp[j+1];
                maxans = max(maxans,sum);
            }
            dp[ind] = maxans; 
        }
        return dp[0];
    }
};
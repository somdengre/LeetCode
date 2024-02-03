class Solution {
public:
    int f(int ind,vector<int>&nums,int k,vector<int>&dp){
        int n = nums.size();
        if(ind == n)return 0;
        if(dp[ind]!= -1)return dp[ind];
        int maxans = INT_MIN;
        int maxi = INT_MIN;
        int l = 0;
        // int n = nums.size()-1;
        for(int j = ind;j < min(n,ind+k);j++){
            l++;
            maxi = max(maxi,nums[j]);
            int sum = l*maxi+ f(j+1,nums,k,dp);
            maxans = max(maxans,sum);
        }
        return dp[ind] = maxans;        
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>dp(n,-1);
        return f(0,arr,k,dp);
    }
};
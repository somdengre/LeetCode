class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int minCost = nums[0];
        for(int i = 0;i<n;i++){
            int profit = nums[i]-minCost;
            maxi = max(profit,maxi);
            minCost = min(minCost,nums[i]);
        }
        return maxi;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int last = nums[0];
        for(int i = 0;i<n;i++){
            int profit = nums[i]-last;
            maxi = max(profit,maxi);
            last = min(last,nums[i]);
        }
        
        return maxi;
    }
};
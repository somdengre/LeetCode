class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int last = nums[0];
        for(int i = 1;i<n;i++){
            int profit = nums[i]-last;
            last = min(last,nums[i]);
            ans = max(ans,profit);
        }
        return ans;
    }
};
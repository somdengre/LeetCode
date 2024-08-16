class Solution {
public:
    int maxDistance(vector<vector<int>>& nums) {
       
        int n = nums.size();
        int mini = nums[0][0];
        int maxi = nums[0].back();
        int ans = INT_MIN;
        for(int i = 1;i<n;i++){
            ans = max(ans,max(abs(nums[i][0]-maxi), abs(nums[i].back()-mini)));
            mini = min(mini,nums[i][0]);
            maxi = max(maxi,nums[i].back());
        }
        return ans;
    }
};
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& nums) {
        double ans = 0;
        int finish = nums[0][0];
        int n = nums.size();
        for(int i = 0;i<n;i++){
            finish = max(finish,nums[i][0]) + nums[i][1];
            ans+=(finish-nums[i][0]);
        }
        
        return (double)ans/n;
    }
};
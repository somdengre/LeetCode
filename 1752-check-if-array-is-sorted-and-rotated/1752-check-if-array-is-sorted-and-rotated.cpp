class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(),cnt = 0;
        if(n == 1)return true;
        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0])cnt++;
        return cnt<=1;
    }
};
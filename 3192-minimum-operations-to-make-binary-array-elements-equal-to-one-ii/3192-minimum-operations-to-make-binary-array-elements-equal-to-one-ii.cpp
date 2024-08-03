class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        
        for(int i = 0;i<n;i++){
            if((ans%2 == 0 && nums[i] == 0) || (ans&1 && nums[i] == 1)){
                ans++;
            }
        }
        
        return ans;
    }
};
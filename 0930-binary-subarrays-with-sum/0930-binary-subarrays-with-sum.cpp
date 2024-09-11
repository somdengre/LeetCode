class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        map<int,int>mp;
        mp[0] = 1;
        int sum = 0;
        int cnt = 0;
        
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            int rem = sum-goal;
            cnt+=mp[rem];
            mp[sum]++;
        }
        
        return cnt;
    }
};
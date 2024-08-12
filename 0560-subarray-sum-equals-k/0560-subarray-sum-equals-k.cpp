class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int n = nums.size();
        mp[0] = 1;
        int sum = 0,cnt = 0;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            int res = sum-k;
            cnt+=mp[res];
            mp[sum]++;
        }
        return cnt;
    }
};
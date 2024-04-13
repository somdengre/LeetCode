class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ans = 0;
        for(int i = 1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i = 0;i<nums.size();i++){
            
            if(nums[i] == k)ans++;
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] -nums[i] == k)ans++;
            }
        }
        return ans;
    }
};
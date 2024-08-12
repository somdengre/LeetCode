class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        map<int,int>mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(mp.find(k-nums[i]) != mp.end()){
                return {i,mp[k-nums[i]]};
            }else{
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};
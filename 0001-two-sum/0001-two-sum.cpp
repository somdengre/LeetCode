class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(mp.find(k-nums[i]) != mp.end()){
                return {mp[k-nums[i]],i};
            }else{
                mp[nums[i]] = i;
            }
        }
        
        return {-1,-1};
    }
};
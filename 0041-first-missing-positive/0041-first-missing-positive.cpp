class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int maxi = 0;
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            mp[nums[i]]++;
        }
        
        for(int i = 1;i<=maxi;i++){
            if(mp.find(i) == mp.end()){
                return i;
            }
        }
        
        return maxi+1;
    }
};
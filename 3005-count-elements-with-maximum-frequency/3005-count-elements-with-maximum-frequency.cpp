class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxi = 0;
        
        unordered_map<int,int>mp;
        
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            maxi = max(it.second,maxi);
        }
        
        int cnt = 0;
        for(auto it:mp){
            if(it.second == maxi){
                cnt++;
            }
        }
        
        return maxi*cnt;
    }
};
class Solution {
public:
    
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        for(int j=0;j<n;j++){
            if(j!=0 && nums[j] == nums[j-1]){continue;};
            int t = 0-nums[j];
            unordered_map<int,int> mp;
            for(int i=j+1;i<n;i++){
                if(mp.find(t-nums[i]) != mp.end()){
                    vector<int> tempTrip = { nums[j], nums[i], t-nums[i]};
                    sort(tempTrip.begin(), tempTrip.end());
                    ans.push_back(tempTrip);
                    while(i+1< n && nums[i+1] == nums[i]) { i++; }
                }
                mp[nums[i]] = i;
            }
        }
        return ans;
        
    }
};



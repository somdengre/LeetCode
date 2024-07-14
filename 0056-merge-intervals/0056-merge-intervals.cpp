class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if(!ans.empty() && ans.back()[1] >= nums[i][0]){
                ans.back()[1] = max(ans.back()[1],nums[i][1]);
            }else{
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};
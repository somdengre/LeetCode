class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& newin) {
        vector<vector<int>>ans;
        int n = nums.size();
        int i = 0;
        while(i<n && nums[i][1] < newin[0] ){
            ans.push_back(nums[i]);
            i++;
        }
        
        while(i<n && nums[i][0] <= newin[1]){
            newin[0] = min(newin[0],nums[i][0]);
            newin[1] = max(newin[1],nums[i][1]);
            i++;
            
        }
        
        ans.push_back(newin);
        
        while(i<n){
            ans.push_back(nums[i]);
            i++;
        }
        
        return ans;
        
        
    }
};
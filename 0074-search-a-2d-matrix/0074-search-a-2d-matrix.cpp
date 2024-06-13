class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int k) {
        
        int n = nums.size();
        int m = nums[0].size();
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == k)return true;
            }
        }
        
        return false;
    }
};
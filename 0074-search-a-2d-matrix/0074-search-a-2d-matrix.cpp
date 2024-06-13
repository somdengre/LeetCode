class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int k) {
        int n = nums.size();
        int m = nums[0].size();
        int low = 0;
        int high = m*n-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            int row = mid/m;
            int col = mid%m;
            if(nums[row][col] == k){
                return true;
            }else if(nums[row][col]> k){
                high = mid-1;
            }else {
                low = mid+1;
            }
        }
        return false;
        
    }
};
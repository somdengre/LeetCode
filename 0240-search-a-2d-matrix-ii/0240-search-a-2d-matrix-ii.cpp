class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int k) {
        int n = nums.size();
        int m = nums[0].size();
        int row = 0;
        int col = m-1;
        
        while(row<n && col>=0){
            if(nums[row][col] == k){
                return true;
            }else if(nums[row][col] > k){
                col--;
            }else{
                row++;
            }
        }
        
        return false;
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        vector<int>row(n,0),col(m,0);
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(row[i] == 1 || col[j] == 1)nums[i][j] = 0;
            }
        }

    }
};
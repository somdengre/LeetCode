class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        vector<int>row,col;
        for(int i = 0;i<n;i++){
            int mini = INT_MAX;
            for(int j = 0;j<m;j++){
                mini = min(mini,nums[i][j]);
            }
            row.push_back(mini);
        }
        
        for(int j = 0;j<m;j++){
            int maxi = INT_MIN;
            for(int i = 0;i<n;i++){
                maxi = max(maxi,nums[i][j]);
            }
            col.push_back(maxi);
        }
        vector<int>ans;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int p = nums[i][j];
                if(p == row[i] && p == col[j]){
                    ans.push_back(p);
                }
            }
        }
        
        return ans;
    }
};
class Solution {
public:
//     int f(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&dp){
//         if(i == 0 && j == 0){
//             return nums[0][0];
//         }
        
//         if(dp[i][j] != -1)return dp[i][j];
//         int left = 1e9;
//         if(j>0)left = nums[i][j]+ f(i,j-1,nums,dp);
//         int up = 1e9;
//         if(i>0)up = nums[i][j] + f(i-1,j,nums,dp);
        
//         return dp[i][j] = min(left,up);
//     }
    int minPathSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        
        vector<int>prev(m,0);
        
        for(int i = 0;i<n;i++){
            vector<int>temp(m,0);
            for(int j = 0;j<m;j++){
                if(i == 0 && j == 0){
                    temp[0] = nums[0][0];
                    continue;
                }
                int left = 1e9;
                if(j>0)left = nums[i][j]+ temp[j-1];
                int up = 1e9;
                if(i>0)up = nums[i][j] + prev[j];
        
                temp[j] = min(left,up);
            }
            prev = temp;
        }
        
        return prev[m-1];
    }
};
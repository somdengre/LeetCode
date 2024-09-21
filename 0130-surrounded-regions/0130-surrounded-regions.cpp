class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>&nums,vector<vector<int>>&vis){
        vis[i][j] = 1;
        int n = nums.size();
        int m = nums[0].size();
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        
        for(int p = 0;p<4;p++){
            int nrow = i + drow[p];
            int ncol = j + dcol[p];
            
            if(nrow >=0 && nrow<n && ncol >=0 && ncol <m && nums[nrow][ncol] == 'O' && !vis[nrow][ncol]){
                dfs(nrow,ncol,nums,vis);
            }
        }
    }
    void solve(vector<vector<char>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i = 0;i<n;i++){
            if(!vis[i][0] && nums[i][0] == 'O'){
                dfs(i,0,nums,vis);
            }
            if(!vis[i][m-1] && nums[i][m-1] == 'O'){
                dfs(i,m-1,nums,vis);
            }
        }
        
        for(int j = 0;j<m;j++){
            if(!vis[0][j] && nums[0][j] == 'O'){
                dfs(0,j,nums,vis);
            }
            if(!vis[n-1][j] && nums[n-1][j] == 'O'){
                dfs(n-1,j,nums,vis);
            }
        }
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == 'O' && !vis[i][j]){
                    nums[i][j] = 'X';
                }
            }
        }
        
        
    }
};
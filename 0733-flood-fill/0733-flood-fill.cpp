class Solution {
public:
    void dfs(int i,int j,int color,vector<vector<int>>&vis,vector<vector<int>>&nums,int oc){
        int n = nums.size();
        int m = nums[0].size();
        vis[i][j] = 1;
        nums[i][j] = color;
        
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        
        for(int p = 0;p<4;p++){
            int nrow = i + drow[p];
            int ncol = j + dcol[p];
            
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && nums[nrow][ncol] == oc){
                dfs(nrow,ncol,color,vis,nums,oc);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& nums, int sr, int sc, int color) {
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int oc = nums[sr][sc];
        dfs(sr,sc,color,vis,nums,oc);
        return nums;
    }
};
class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&nums,vector<vector<int>>&vis){
        int n = nums.size();
        int m = nums[0].size();
        vis[i][j] = 1;
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(int p = 0;p<4;p++){
            int nrow = i+delrow[p];
            int ncol = j+delcol[p];
            if(nrow >=0  && nrow<n && ncol>=0 && ncol < m && vis[nrow][ncol] == 0 && nums[nrow][ncol]){
                dfs(nrow,ncol,nums,vis);
            }
        }
    }
    int islands(vector<vector<int>>& nums){
        int n = nums.size();
        int m = nums[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == 1 && !vis[i][j]){
                    cnt++;
                    dfs(i,j,nums,vis);
                }
            }
        }
        return cnt;
    }
    int minDays(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int mini = 0;
        int inIsland = islands(nums);
        if(inIsland != 1)return 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == 1){
                    nums[i][j] = 0;
                    int cnt = islands(nums);
                    if(cnt != 1){
                        return 1;
                    }
                    nums[i][j] = 1;
                }
            }
        }
        
        return 2;
    }
};
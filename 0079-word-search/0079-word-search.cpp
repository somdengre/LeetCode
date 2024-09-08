class Solution {
public:
    bool dfs(int i,int j,vector<vector<char>>&nums,vector<vector<int>>&vis,string s,int p){
        if(p == s.length()){
            return true;
        }
         if (i < 0 || i >= nums.size() || j < 0 || j >= nums[0].size() || nums[i][j] != s[p] || vis[i][j] == 1) {
            return false;
        }
        int n = nums.size();
        int m = nums[0].size();
        vis[i][j] = 1;
        
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        
        for(int z = 0;z<4;z++){
            int nrow = i+delrow[z];
            int ncol = j+delcol[z];
            if(dfs(nrow,ncol,nums,vis,s,p+1))return true;
        }
        
        vis[i][j] = 0;
        return false;
    }
    bool exist(vector<vector<char>>& nums, string s) {
        int n = nums.size();
        int m = nums[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == s[0]){
                    if(dfs(i,j,nums,vis,s,0) == true){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};
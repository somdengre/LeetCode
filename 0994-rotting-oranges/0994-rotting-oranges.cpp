class Solution {
public:
    int orangesRotting(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int cnt = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }else{
                    vis[i][j] = 0;
                }
            }
        }
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            cnt = max(cnt,t);
            for(int i = 0;i<4;i++){
                int nrow = r+delrow[i];
                int ncol = c+delcol[i];
                
                if(nrow >= 0 && nrow <n && ncol >=0 && ncol <m && vis[nrow][ncol] == 0 && nums[nrow][ncol] == 1){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol] = 2;
                }
            }
        }
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(vis[i][j] != 2 && nums[i][j] == 1){
                    return -1;
                }
            }
        }
        return cnt;
    }
};
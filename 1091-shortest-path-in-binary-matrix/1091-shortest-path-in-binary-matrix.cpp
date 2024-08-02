class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
         if (grid[0][0] == 1 || grid[n-1][n-1] == 1) {
            return -1; 
        }
         if (n == 1 && m == 1 && grid[0][0] == 0) {
            return 1;
        }
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        queue<pair<int,pair<int,int>>>q;
        q.push({1,{0,0}}); //start with a distance of 1
        dist[0][0] = 0;
        
        
        
         int dr[] = {-1, -1, 0, 1, 1, 1, 0, -1};
        int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            for(int i = 0;i<8;i++){
                int nrow = row+dr[i];
                int ncol = col+dc[i];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == 0 && dis + 1 < dist[nrow][ncol]){
                    if(nrow == n-1 && ncol == n-1){
                        return dis+1;
                    }
                    dist[nrow][ncol] = 1 + dis;
                    q.push({dis+1,{nrow,ncol}});
                }
            }
            
           
        }
        return -1;
    }
};
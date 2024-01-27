class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int c = 4;
        
        while(c){
            if(mat == target){
                return true;
            }
            for(int i = 0;i<n-1;i++){
                for(int j = i+1;j<n;j++){
                    swap(mat[i][j],mat[j][i]);
                }
                
            }
            
            for(int i = 0;i<n;i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            
            c--;
        }
        return false;
        
    }
};
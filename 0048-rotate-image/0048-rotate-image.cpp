class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++){
            for(int j= i;j<m[0].size();j++){
                swap(m[j][i],m[i][j]);
            }
        }
        
        for(int i = 0;i<m.size();i++){
            reverse(m[i].begin(),m[i].end());
        }
    }
};
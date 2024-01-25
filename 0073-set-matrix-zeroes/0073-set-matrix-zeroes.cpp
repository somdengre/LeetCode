class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int>row(m.size(),-1),col(m[0].size(),-1);
        for(int i = 0;i<m.size();i++){
            for(int j = 0;j<m[0].size();j++){
                if(m[i][j] == 0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        
        for(int i = 0;i<row.size();i++){
            if(row[i] == 0){
                for(int j = 0;j<m[i].size();j++){
                    m[i][j] = 0; 
                }
            }
        }
        for(int i = 0;i<col.size();i++){
            if(col[i] == 0){
                for(int j = 0;j<m.size();j++){
                    m[j][i] = 0; 
                }
            }
        }
    }
};
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v;
        int n=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<n;j++){
                v.push_back(matrix[i][j]);
            }
        }
        
        sort(v.begin(),v.end());
        
        return v[k-1];
    }
};
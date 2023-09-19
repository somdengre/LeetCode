class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {        
        int sum = 0;
        int left = 0, right = mat[0].size()-1;
        for(int i = 0; i < mat.size(); i++)
        {
            sum += mat[i][left++] + mat[i][right--];
        }

        if(!(mat.size()%2 == 0)) // to remove common number
        {
            int i = mat.size()/2;
            sum -= mat[i][i];
        }

        return sum;
    }
};
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left = 0,top = 0,right = n-1,bottom  = n-1;
        
        vector<vector<int>>nums(n,vector<int>(n,-1));
        int cnt = 1;
        while(left <= right && top <= bottom){
            for(int i = left;i<=right;i++){
                nums[top][i] = cnt;
                cnt++;
            }
            top++;
            
            for(int i = top;i<=bottom;i++){
                nums[i][right] = cnt;
                cnt++;
            }
            right--;
            
            if(bottom>=top){
                for(int i = right;i>=left ;i--){
                    nums[bottom][i] = cnt;
                    cnt++;
                }
                bottom--;
            }
            
            if(left<=right){
                for(int i = bottom;i>=top;i--){
                    nums[i][left] = cnt;
                    cnt++;
                }
                left++;
            }
        }
        
        return nums;
    }
};
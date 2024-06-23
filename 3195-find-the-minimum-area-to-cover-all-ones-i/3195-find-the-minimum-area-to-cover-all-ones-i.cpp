class Solution {
public:
    int minimumArea(vector<vector<int>>& nums) {
        int minr = 1006,maxr = -1;
        int minc = 1006,maxc = -1;
        
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums[0].size();j++){
                if(nums[i][j] == 1){
                    maxr = max(i,maxr);
                    maxc = max(j,maxc);
                    minr = min(i,minr);
                    minc = min(j,minc);
                }
            }
        }
        
        return (maxr-minr+1)*(maxc-minc+1);
    }
};
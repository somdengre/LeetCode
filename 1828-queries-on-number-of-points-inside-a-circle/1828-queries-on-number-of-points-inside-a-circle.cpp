class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& nums) {
    vector<int> ans(nums.size(),0);
        
        
    for(int i = 0;i<nums.size();i++){
         for(int j =0;j<points.size();j++){
             int x = points[j][0]-nums[i][0];
             int y = points[j][1]-nums[i][1];
            
             if(sqrt(x*x+y*y) <= nums[i][2]){
                 ans[i] = ans[i] + 1;
             }
         }
     }
        
        
        return ans;
        
    }
};



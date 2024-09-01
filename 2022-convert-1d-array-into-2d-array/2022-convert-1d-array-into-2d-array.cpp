class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& nums, int m, int n) {
        vector<vector<int>>ans(m);
        if(m*n != nums.size())return {}; 
        int cnt  = 0, p = 1;
        for(int i = 0;i<nums.size();i++){
            if(i>= p*n){
                p++;
                cnt++;
            }
            if(cnt<m)ans[cnt].push_back(nums[i]);
            
        }
        
        return ans;
    }
};
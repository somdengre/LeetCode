class Solution {
public:
    int heightChecker(vector<int>& nums) {
        int cnt = 0;
        vector<int>ans(nums.begin(),nums.end());
        sort(ans.begin(),ans.end());
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != ans[i]){
                cnt++;
            }
        }
        
        return cnt;
    }
};
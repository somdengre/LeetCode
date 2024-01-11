class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0)continue;
            else{
                ans.push_back(nums[i]);
            }
        }
        
        int p = nums.size()-ans.size();
        int r = 0;
        for(int i = 0;i<p;i++){
            ans.push_back(r);
        }
        
        nums = ans;
    }
};
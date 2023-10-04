class Solution {
public:
    vector<int> findArray(vector<int>& nums) {
        int x = nums[0];
        
        for(int i=1;i<nums.size();i++){
            nums[i] = x^nums[i];
            x^=nums[i];
        }
        
        return nums;
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int z = nums.size();
        int p = 0;
        
        for(int i=0; i<z; i++){
            for(int q=0; q<=i; q++){
                p = p+nums[q];
            }
            ans.push_back(p);
            p = 0;
        }
        
        return ans;
    }
};
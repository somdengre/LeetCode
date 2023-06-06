class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==t){
                ans.push_back(i);
            }
        }
        
        return ans;
        
        
    }
};
class Solution {
public:
    void f(int i,int k,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
        if(i == nums.size()){
            if(k == 0){
                ans.push_back(temp);
            }
            return;
        }
        
        if(k>=nums[i]){
            temp.push_back(nums[i]);
            f(i,k-nums[i],nums,temp,ans);
            temp.pop_back();
        }
        
        f(i+1,k,nums,temp,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n = nums.size();
        f(0,k,nums,temp,ans);
        
        return ans;
    }
};